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
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ventanaPrincipal
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QRadioButton *radioButton;
    QCheckBox *checkBox;
    QComboBox *comboBox;
    QRadioButton *radioButton_2;
    QCheckBox *checkBox_2;
    QTextEdit *textEdit;
    QPushButton *pushButton_3;
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *label_2;
    QPushButton *pushButton_6;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ventanaPrincipal)
    {
        if (ventanaPrincipal->objectName().isEmpty())
            ventanaPrincipal->setObjectName(QString::fromUtf8("ventanaPrincipal"));
        ventanaPrincipal->resize(387, 326);
        centralWidget = new QWidget(ventanaPrincipal);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 181, 20));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(0, 80, 91, 22));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(0, 50, 91, 22));
        radioButton = new QRadioButton(centralWidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(100, 0, 102, 20));
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(100, 20, 85, 20));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(100, 50, 101, 22));
        radioButton_2 = new QRadioButton(centralWidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(100, 80, 102, 20));
        checkBox_2 = new QCheckBox(centralWidget);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(100, 100, 85, 20));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 140, 191, 41));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(0, 110, 91, 22));
        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 190, 191, 41));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 240, 81, 22));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(120, 240, 81, 22));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(210, 0, 171, 231));
        label_2->setStyleSheet(QString::fromUtf8(""));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(210, 240, 171, 22));
        ventanaPrincipal->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ventanaPrincipal);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 387, 19));
        ventanaPrincipal->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ventanaPrincipal);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        ventanaPrincipal->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ventanaPrincipal);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ventanaPrincipal->setStatusBar(statusBar);

        retranslateUi(ventanaPrincipal);

        QMetaObject::connectSlotsByName(ventanaPrincipal);
    } // setupUi

    void retranslateUi(QMainWindow *ventanaPrincipal)
    {
        ventanaPrincipal->setWindowTitle(QApplication::translate("ventanaPrincipal", "ventanaPrincipal", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        pushButton->setText(QApplication::translate("ventanaPrincipal", "Saludar", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("ventanaPrincipal", "despedirse", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("ventanaPrincipal", "RadioButton", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("ventanaPrincipal", "CheckBox", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("ventanaPrincipal", "RadioButton", 0, QApplication::UnicodeUTF8));
        checkBox_2->setText(QApplication::translate("ventanaPrincipal", "CheckBox", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("ventanaPrincipal", "agregar", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("ventanaPrincipal", "de A a B", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("ventanaPrincipal", "de B a A", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        pushButton_6->setText(QApplication::translate("ventanaPrincipal", "cargar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ventanaPrincipal: public Ui_ventanaPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAPRINCIPAL_H
