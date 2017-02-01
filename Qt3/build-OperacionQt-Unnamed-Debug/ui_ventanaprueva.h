/********************************************************************************
** Form generated from reading UI file 'ventanaprueva.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANAPRUEVA_H
#define UI_VENTANAPRUEVA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VentanaPrueva
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *VentanaPrueva)
    {
        if (VentanaPrueva->objectName().isEmpty())
            VentanaPrueva->setObjectName(QString::fromUtf8("VentanaPrueva"));
        VentanaPrueva->resize(308, 299);
        centralWidget = new QWidget(VentanaPrueva);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);

        VentanaPrueva->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(VentanaPrueva);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 308, 19));
        VentanaPrueva->setMenuBar(menuBar);
        mainToolBar = new QToolBar(VentanaPrueva);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        VentanaPrueva->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(VentanaPrueva);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        VentanaPrueva->setStatusBar(statusBar);
        QWidget::setTabOrder(lineEdit, textEdit);
        QWidget::setTabOrder(textEdit, pushButton);

        retranslateUi(VentanaPrueva);
        QObject::connect(pushButton, SIGNAL(clicked()), VentanaPrueva, SLOT(decirHola()));

        QMetaObject::connectSlotsByName(VentanaPrueva);
    } // setupUi

    void retranslateUi(QMainWindow *VentanaPrueva)
    {
        VentanaPrueva->setWindowTitle(QApplication::translate("VentanaPrueva", "VentanaPrueva", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("VentanaPrueva", "Texto de Entrada", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("VentanaPrueva", "+", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VentanaPrueva: public Ui_VentanaPrueva {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAPRUEVA_H
