#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QTimer>
#include <QGraphicsScene>
#include <QDateTime>
#include <QDebug>
#include <QGraphicsPixmapItem>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pressThreshold = 1150;
    QGraphicsScene* scene = new QGraphicsScene();
    //设置场景的位置区域
    scene->setSceneRect(ui->graphicsView->rect());

    //把指针窗口添加到场景中, 并返回用来操控指针窗口的“代理”
    m_needle = scene->addWidget(new Needle);

    //设置指针窗口在场景中的位置
    m_needle->setPos(100,  103);
    m_needle->setTransformOriginPoint(4, 0); //旋转原点在指针图片内部的(4,0)位置
    QPixmap pixCenter(":/res/overlay.png");
    QGraphicsPixmapItem *centerItem = scene->addPixmap(pixCenter);
    centerItem->setPos(23,25);


    //设置图像视图显示的场景
    ui->graphicsView->setScene(scene);

    pixNormalStatus.load(":/res/normal.png");
    pixWarningStatus.load(":/res/warning.png");

    QTimer *timer = new QTimer(this);
    timer->setInterval(1000);
    connect(timer, &QTimer::timeout, this, &MainWindow::updatetime);
    timer->start();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::monitor()
{
    serialport = new QSerialPort;
    serialport->setPortName("COM2");
    if(!serialport->open(QIODevice::ReadWrite))
    {
        QMessageBox::critical(nullptr,
                              "串口打开失败",
                              "串口COM2不存在或者已被占用!",
                              QMessageBox::Ok);
        QTimer::singleShot(0, qApp, SLOT(quit()));

    }

    serialport->setBaudRate(19200);
    serialport->setDataBits(QSerialPort::Data8);
    serialport->setParity(QSerialPort::NoParity);
    serialport->setStopBits(QSerialPort::OneStop);
    serialport->setFlowControl(QSerialPort::NoFlowControl);


    senderThread = new SendPack(serialport);
    senderThread->start();

    receiveThread = new ReceivePack(serialport);
    receiveThread->start();

    //添加信号与槽， 接收线程发信号
    connect(receiveThread, &ReceivePack::receiveResponsePack, this, &MainWindow::updateUI);
}

void MainWindow::updateUI(char cmd, char param, int data)
{
    switch (cmd) {
    case HOSTT_TEMPRTRUE_RSP:
        ui->tempLabel->setText(QString::number(data));
        break;
    case WORK_ZHOU_SPEED_RSP:
    {
        QLabel *labels[2] = {ui->mianSpeed1, ui->mainSpeed2};
        if(param <1 || param >2) break;
        labels[param -1]->setText(QString::number(data));
        break;
    }

    case OIL_VOLUME_RSP:
    {
        QLabel* labels[] = {ui->gang1, ui->gang2, ui->gang3};
        if(param < 1 || param > 3) break;
        labels[param - 1]->setText(QString::number(data) + " L");
        break;
    }
    case PRESSURE_CHAMBER_RSP:
    {
        QWidget *widgets[5][2] =
        {
            {ui->chang1, ui->progressBar_chang1},
            {ui->chang2, ui->progressBar_chang2},
            {ui->chang3, ui->progressBar_chang3},
            {ui->chang4, ui->progressBar_chang4},
            {ui->chang5, ui->progressBar_chang5},
        };
        if(param < 1 || param > 5) break;
        bool warning = data >= pressThreshold;
        pressureStatus[param-1] = warning;
        updatePressure((QProgressBar*)widgets[param-1][1], (QLabel*)widgets[param-1][0], data, warning);
        break;
    }
    case ROBOTIC_ARM_PRESSURE_RSP:
        ui->bi1->setText(QString::number(data) + " Pa");
        ui->progressBar_bi1->setValue(data);
        break;
    case POWER_LEVER_SPPED_RSP:
        setNeedleValue(data);
        break;
    }
    updateWarningLabel();
}

void MainWindow::updatetime()
{
    QString timeStr = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
    ui->timeLabel->setText(timeStr);
}

void MainWindow::setNeedleValue(double value)
{
    if(value < 0)  value = 0;
    else if (value > 120) value = 120;

    double rotateAngle = (double)((310 - 54.0)/120)*value + 54.00;

    if(value < 40) rotateAngle += 1;
    else rotateAngle -= 2;

    m_needle->setRotation(rotateAngle);
}

void MainWindow::updatePressure(QProgressBar *bar, QLabel *label, int data, bool warning)
{
    bar->setValue(data);
    label->setText(QString::number(data)+ " Pa");
    if(warning)
        bar->setStyleSheet("QProgressBar::chunk{background-color:#EB3324;}");
    else {
        bar->setStyleSheet("QProgressBar::chunk{background-color:#00C258;}");
    }

}

void MainWindow::updateWarningLabel()
{
    if(pressureStatus[0] || pressureStatus[1] || pressureStatus[2] ||pressureStatus[3] || pressureStatus[4] || pressureStatus[5])
    {
        ui->label_status->setPixmap(pixWarningStatus);
    }
    else {
        ui->label_status->setPixmap(pixNormalStatus);
    }
}

void MainWindow::on_pushButton_add_clicked()
{
    char pack[9] = {0};
    char data[4] = {0};
    char param = 0xF0;
    senderThread->makePack(POWER_LEVER_SPPED_REQ, param, data, pack);
    int ret = serialport->write(pack, sizeof(pack));
    qDebug() << "send:" << ret << "bytes";
}

void MainWindow::on_pushButton_sub_clicked()
{
    char pack[9] = {0};
    char data[4] = {0};
    char param = 0x0F;
    senderThread->makePack(POWER_LEVER_SPPED_REQ, param, data, pack);
    int ret = serialport->write(pack, sizeof(pack));
    qDebug() << "send:" << ret << "bytes";
}
