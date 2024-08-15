/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *tempLabel;
    QLabel *mianSpeed1;
    QLabel *mainSpeed2;
    QLabel *gang1;
    QLabel *gang2;
    QLabel *gang3;
    QLabel *chang1;
    QLabel *chang2;
    QLabel *chang3;
    QLabel *chang4;
    QLabel *chang5;
    QProgressBar *progressBar_chang1;
    QProgressBar *progressBar_chang2;
    QProgressBar *progressBar_chang3;
    QProgressBar *progressBar_chang4;
    QProgressBar *progressBar_chang5;
    QProgressBar *progressBar_bi1;
    QLabel *bi1;
    QPushButton *pushButton_add;
    QPushButton *pushButton_sub;
    QGraphicsView *graphicsView;
    QLabel *timeLabel;
    QLabel *label_status;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1200, 864);
        MainWindow->setStyleSheet(QString::fromUtf8("QProgressBar{\n"
"	border:0.1px solid;\n"
"	background-color:rgb(73,76,84);\n"
"}\n"
"QProgressBar::chunk{\n"
"	background-color:rgb(0,185,84);\n"
"}"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 1200, 864));
        label->setPixmap(QPixmap(QString::fromUtf8(":/res/bg3.png")));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 240, 71, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        font.setPointSize(12);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: white;"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(720, 240, 71, 20));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: white;"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(410, 240, 71, 16));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color: white;"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(1040, 240, 71, 16));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color: white;"));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(40, 330, 71, 16));
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("color: white;"));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(40, 416, 71, 16));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("color: white;"));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(40, 506, 71, 16));
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("color: white;"));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(40, 596, 71, 16));
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("color: white;"));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(40, 684, 71, 16));
        label_10->setFont(font);
        label_10->setStyleSheet(QString::fromUtf8("color: white;"));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(68, 772, 111, 16));
        label_11->setFont(font);
        label_11->setStyleSheet(QString::fromUtf8("color: white;"));
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(380, 772, 111, 16));
        label_12->setFont(font);
        label_12->setStyleSheet(QString::fromUtf8("color: white;"));
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(707, 772, 111, 16));
        label_13->setFont(font);
        label_13->setStyleSheet(QString::fromUtf8("color: white;"));
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(990, 353, 91, 16));
        label_14->setFont(font);
        label_14->setStyleSheet(QString::fromUtf8("color: white;"));
        tempLabel = new QLabel(centralWidget);
        tempLabel->setObjectName(QString::fromUtf8("tempLabel"));
        tempLabel->setGeometry(QRect(99, 270, 31, 16));
        tempLabel->setFont(font);
        tempLabel->setLayoutDirection(Qt::LeftToRight);
        tempLabel->setStyleSheet(QString::fromUtf8("color: white;"));
        mianSpeed1 = new QLabel(centralWidget);
        mianSpeed1->setObjectName(QString::fromUtf8("mianSpeed1"));
        mianSpeed1->setGeometry(QRect(403, 268, 51, 20));
        mianSpeed1->setFont(font);
        mianSpeed1->setLayoutDirection(Qt::LeftToRight);
        mianSpeed1->setStyleSheet(QString::fromUtf8("color: white;"));
        mainSpeed2 = new QLabel(centralWidget);
        mainSpeed2->setObjectName(QString::fromUtf8("mainSpeed2"));
        mainSpeed2->setGeometry(QRect(720, 268, 51, 20));
        mainSpeed2->setFont(font);
        mainSpeed2->setLayoutDirection(Qt::LeftToRight);
        mainSpeed2->setStyleSheet(QString::fromUtf8("color: white;"));
        gang1 = new QLabel(centralWidget);
        gang1->setObjectName(QString::fromUtf8("gang1"));
        gang1->setGeometry(QRect(98, 802, 61, 20));
        gang1->setFont(font);
        gang1->setLayoutDirection(Qt::LeftToRight);
        gang1->setStyleSheet(QString::fromUtf8("color: white;"));
        gang2 = new QLabel(centralWidget);
        gang2->setObjectName(QString::fromUtf8("gang2"));
        gang2->setGeometry(QRect(416, 800, 61, 20));
        gang2->setFont(font);
        gang2->setLayoutDirection(Qt::LeftToRight);
        gang2->setStyleSheet(QString::fromUtf8("color: white;"));
        gang3 = new QLabel(centralWidget);
        gang3->setObjectName(QString::fromUtf8("gang3"));
        gang3->setGeometry(QRect(730, 800, 61, 20));
        gang3->setFont(font);
        gang3->setLayoutDirection(Qt::LeftToRight);
        gang3->setStyleSheet(QString::fromUtf8("color: white;"));
        chang1 = new QLabel(centralWidget);
        chang1->setObjectName(QString::fromUtf8("chang1"));
        chang1->setGeometry(QRect(130, 330, 61, 20));
        chang1->setFont(font);
        chang1->setLayoutDirection(Qt::LeftToRight);
        chang1->setStyleSheet(QString::fromUtf8("color: white;"));
        chang2 = new QLabel(centralWidget);
        chang2->setObjectName(QString::fromUtf8("chang2"));
        chang2->setGeometry(QRect(130, 414, 61, 20));
        chang2->setFont(font);
        chang2->setLayoutDirection(Qt::LeftToRight);
        chang2->setStyleSheet(QString::fromUtf8("color: white;"));
        chang3 = new QLabel(centralWidget);
        chang3->setObjectName(QString::fromUtf8("chang3"));
        chang3->setGeometry(QRect(130, 504, 61, 20));
        chang3->setFont(font);
        chang3->setLayoutDirection(Qt::LeftToRight);
        chang3->setStyleSheet(QString::fromUtf8("color: white;"));
        chang4 = new QLabel(centralWidget);
        chang4->setObjectName(QString::fromUtf8("chang4"));
        chang4->setGeometry(QRect(130, 594, 61, 20));
        chang4->setFont(font);
        chang4->setLayoutDirection(Qt::LeftToRight);
        chang4->setStyleSheet(QString::fromUtf8("color: white;"));
        chang5 = new QLabel(centralWidget);
        chang5->setObjectName(QString::fromUtf8("chang5"));
        chang5->setGeometry(QRect(130, 682, 61, 20));
        chang5->setFont(font);
        chang5->setLayoutDirection(Qt::LeftToRight);
        chang5->setStyleSheet(QString::fromUtf8("color: white;"));
        progressBar_chang1 = new QProgressBar(centralWidget);
        progressBar_chang1->setObjectName(QString::fromUtf8("progressBar_chang1"));
        progressBar_chang1->setGeometry(QRect(17, 355, 208, 22));
        progressBar_chang1->setMinimum(500);
        progressBar_chang1->setMaximum(1200);
        progressBar_chang1->setValue(800);
        progressBar_chang1->setTextVisible(false);
        progressBar_chang2 = new QProgressBar(centralWidget);
        progressBar_chang2->setObjectName(QString::fromUtf8("progressBar_chang2"));
        progressBar_chang2->setGeometry(QRect(17, 444, 208, 22));
        progressBar_chang2->setMinimum(500);
        progressBar_chang2->setMaximum(1200);
        progressBar_chang2->setValue(800);
        progressBar_chang2->setTextVisible(false);
        progressBar_chang3 = new QProgressBar(centralWidget);
        progressBar_chang3->setObjectName(QString::fromUtf8("progressBar_chang3"));
        progressBar_chang3->setGeometry(QRect(17, 533, 208, 22));
        progressBar_chang3->setMinimum(500);
        progressBar_chang3->setMaximum(1200);
        progressBar_chang3->setValue(800);
        progressBar_chang3->setTextVisible(false);
        progressBar_chang4 = new QProgressBar(centralWidget);
        progressBar_chang4->setObjectName(QString::fromUtf8("progressBar_chang4"));
        progressBar_chang4->setGeometry(QRect(17, 622, 208, 22));
        progressBar_chang4->setMinimum(500);
        progressBar_chang4->setMaximum(1200);
        progressBar_chang4->setValue(800);
        progressBar_chang4->setTextVisible(false);
        progressBar_chang5 = new QProgressBar(centralWidget);
        progressBar_chang5->setObjectName(QString::fromUtf8("progressBar_chang5"));
        progressBar_chang5->setGeometry(QRect(17, 709, 208, 22));
        progressBar_chang5->setMinimum(500);
        progressBar_chang5->setMaximum(1200);
        progressBar_chang5->setValue(800);
        progressBar_chang5->setTextVisible(false);
        progressBar_bi1 = new QProgressBar(centralWidget);
        progressBar_bi1->setObjectName(QString::fromUtf8("progressBar_bi1"));
        progressBar_bi1->setGeometry(QRect(965, 380, 208, 22));
        progressBar_bi1->setMinimum(500);
        progressBar_bi1->setMaximum(1200);
        progressBar_bi1->setValue(800);
        progressBar_bi1->setTextVisible(false);
        bi1 = new QLabel(centralWidget);
        bi1->setObjectName(QString::fromUtf8("bi1"));
        bi1->setGeometry(QRect(1090, 352, 61, 20));
        bi1->setFont(font);
        bi1->setLayoutDirection(Qt::LeftToRight);
        bi1->setStyleSheet(QString::fromUtf8("color: white;"));
        pushButton_add = new QPushButton(centralWidget);
        pushButton_add->setObjectName(QString::fromUtf8("pushButton_add"));
        pushButton_add->setGeometry(QRect(1010, 730, 125, 34));
        pushButton_add->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-image:url(\":/res/add_normal.png\");\n"
"	padding:0;\n"
"	border:0;\n"
"	background-position:Center;\n"
"}\n"
"QPushButton:pressed{\n"
"		background-image:url(\":/res/add_press.png\");\n"
"}"));
        pushButton_sub = new QPushButton(centralWidget);
        pushButton_sub->setObjectName(QString::fromUtf8("pushButton_sub"));
        pushButton_sub->setGeometry(QRect(1010, 780, 125, 34));
        pushButton_sub->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-image:url(\":/res/sub_normal.png\");\n"
"	padding:0;\n"
"	border:0;\n"
"	background-position:Center;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-image:url(\":/res/sub_press.png\");\n"
"}"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(959, 475, 200, 206));
        graphicsView->setStyleSheet(QString::fromUtf8("QGraphicsView{\n"
"	background:transparent;\n"
"}"));
        graphicsView->setFrameShape(QFrame::NoFrame);
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        timeLabel = new QLabel(centralWidget);
        timeLabel->setObjectName(QString::fromUtf8("timeLabel"));
        timeLabel->setGeometry(QRect(983, 270, 181, 16));
        timeLabel->setFont(font);
        timeLabel->setLayoutDirection(Qt::LeftToRight);
        timeLabel->setStyleSheet(QString::fromUtf8("color: white;"));
        label_status = new QLabel(centralWidget);
        label_status->setObjectName(QString::fromUtf8("label_status"));
        label_status->setGeometry(QRect(403, 90, 395, 106));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "\344\270\273\346\234\272\346\270\251\345\272\246", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\345\211\257\350\275\264\350\275\254\351\200\237", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\344\270\273\350\275\264\350\275\254\351\200\237", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "\344\270\273\346\234\272\346\227\266\351\227\264", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "1\345\217\267\345\216\213\345\212\233\344\273\223", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "2\345\217\267\345\216\213\345\212\233\344\273\223", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "3\345\217\267\345\216\213\345\212\233\344\273\223", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "4\345\217\267\345\216\213\345\212\233\344\273\223", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "5\345\217\267\345\216\213\345\212\233\344\273\223", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "1\345\217\267\345\267\245\344\275\234\347\274\270\346\262\271\351\207\217", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "2\345\217\267\345\267\245\344\275\234\347\274\270\346\262\271\351\207\217", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "3\345\217\267\345\267\245\344\275\234\347\274\270\346\262\271\351\207\217", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "\346\234\272\346\242\260\350\207\202\345\216\213\345\212\233", nullptr));
        tempLabel->setText(QApplication::translate("MainWindow", "000", nullptr));
        mianSpeed1->setText(QApplication::translate("MainWindow", "000", nullptr));
        mainSpeed2->setText(QApplication::translate("MainWindow", "000", nullptr));
        gang1->setText(QApplication::translate("MainWindow", "000 L", nullptr));
        gang2->setText(QApplication::translate("MainWindow", "000 L", nullptr));
        gang3->setText(QApplication::translate("MainWindow", "000 L", nullptr));
        chang1->setText(QApplication::translate("MainWindow", "000 Pa", nullptr));
        chang2->setText(QApplication::translate("MainWindow", "000 Pa", nullptr));
        chang3->setText(QApplication::translate("MainWindow", "000 Pa", nullptr));
        chang4->setText(QApplication::translate("MainWindow", "000 Pa", nullptr));
        chang5->setText(QApplication::translate("MainWindow", "000 Pa", nullptr));
        bi1->setText(QApplication::translate("MainWindow", "000 Pa", nullptr));
        pushButton_add->setText(QString());
        pushButton_sub->setText(QString());
        timeLabel->setText(QApplication::translate("MainWindow", "0000-00-00 00\357\274\23200\357\274\23200", nullptr));
        label_status->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
