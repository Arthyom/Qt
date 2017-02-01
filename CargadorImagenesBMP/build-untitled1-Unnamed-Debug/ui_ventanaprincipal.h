/********************************************************************************
** Form generated from reading UI file 'ventanaprincipal.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANAPRINCIPAL_H
#define UI_VENTANAPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VentanaPrincipal
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QGroupBox *groupBox_2;
    QLabel *label_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *label_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *VentanaPrincipal)
    {
        if (VentanaPrincipal->objectName().isEmpty())
            VentanaPrincipal->setObjectName(QString::fromUtf8("VentanaPrincipal"));
        VentanaPrincipal->resize(1150, 683);
        centralWidget = new QWidget(VentanaPrincipal);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 571, 621));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        groupBox->setFont(font);
        groupBox->setFlat(false);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(12, 41, 141, 81));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 130, 551, 481));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 52, 54);"));
        label->setFrameShape(QFrame::Panel);
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(224, 41, 104, 41));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(220, 90, 51, 31));
        QFont font1;
        font1.setPointSize(10);
        lineEdit->setFont(font1);
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(280, 90, 51, 31));
        lineEdit_2->setFont(font1);
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(420, 40, 141, 81));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 30, 571, 101));
        label_3->setAutoFillBackground(false);
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        label_3->raise();
        pushButton->raise();
        label->raise();
        pushButton_3->raise();
        lineEdit->raise();
        lineEdit_2->raise();
        pushButton_2->raise();
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(580, 0, 571, 655));
        groupBox_2->setFont(font);
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 130, 551, 481));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 52, 54);"));
        label_2->setFrameShape(QFrame::Box);
        pushButton_4 = new QPushButton(groupBox_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(480, 40, 80, 81));
        pushButton_5 = new QPushButton(groupBox_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(10, 40, 80, 81));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 30, 571, 101));
        label_4->setAutoFillBackground(false);
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        label_4->raise();
        label_2->raise();
        pushButton_4->raise();
        pushButton_5->raise();
        VentanaPrincipal->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(VentanaPrincipal);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1150, 19));
        VentanaPrincipal->setMenuBar(menuBar);
        mainToolBar = new QToolBar(VentanaPrincipal);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        VentanaPrincipal->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(VentanaPrincipal);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        VentanaPrincipal->setStatusBar(statusBar);

        retranslateUi(VentanaPrincipal);

        QMetaObject::connectSlotsByName(VentanaPrincipal);
    } // setupUi

    void retranslateUi(QMainWindow *VentanaPrincipal)
    {
        VentanaPrincipal->setWindowTitle(QApplication::translate("VentanaPrincipal", "VentanaPrincipal", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("VentanaPrincipal", "Panel De Entrada", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("VentanaPrincipal", "Cargar", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        pushButton_3->setText(QApplication::translate("VentanaPrincipal", "Nueva", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("VentanaPrincipal", "Guardar", 0, QApplication::UnicodeUTF8));
        label_3->setText(QString());
        groupBox_2->setTitle(QApplication::translate("VentanaPrincipal", "Panel De Salida", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        pushButton_4->setText(QApplication::translate("VentanaPrincipal", ">", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("VentanaPrincipal", "<", 0, QApplication::UnicodeUTF8));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VentanaPrincipal: public Ui_VentanaPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAPRINCIPAL_H
