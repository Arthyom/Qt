#include "ventanaprueva.h"
#include <QApplication>
#include <QtGui/QApplication>
#include <qlabel.h>
#include <qdebug.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    VentanaPrueva w;

    QLabel et ("Esta es una etiqueta");
    et.show();

    qDebug("hola que hace");

    w.show();

    return a.exec();
}
