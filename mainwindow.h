#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include "receivepack.h"
#include "sendpack.h"
#include "needle.h"
#include <QGraphicsProxyWidget>
#include <QProgressBar>
#include <QLabel>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void monitor();
    void updateUI(char cmd, char param, int data);
    void updatetime();
    void setNeedleValue(double value);
    void updatePressure(QProgressBar* bar, QLabel* label, int data, bool warning);
    void updateWarningLabel();

private slots:
    void on_pushButton_add_clicked();

    void on_pushButton_sub_clicked();

private:
    Ui::MainWindow *ui;
    QSerialPort *serialport;

    SendPack *senderThread;
    ReceivePack* receiveThread;
    QGraphicsProxyWidget* m_needle;
    int pressThreshold;
    bool pressureStatus[6] = {false,};
    QPixmap pixNormalStatus;
    QPixmap pixWarningStatus;

};



#endif // MAINWINDOW_H
