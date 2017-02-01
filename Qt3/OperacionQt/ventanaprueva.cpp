#include "ventanaprueva.h"
#include "ui_ventanaprueva.h"

VentanaPrueva::VentanaPrueva(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VentanaPrueva)
{
    ui->setupUi(this);

    /* los objetos qobjet son archivos que se pueden
     * usar por si solos, asi que los objetos se pueden
     * definir como qwidgets
     */

    connect( ui->p, SIGNAL(holaSenial()), this, SLOT(decirHola()));

}

VentanaPrueva::~VentanaPrueva()
{
    delete ui;

}


void VentanaPrueva::decirHola()
{
    QString h = "Hola desde el slot decir hola";
    ui->textEdit->setText( ui->textEdit->toPlainText() + " " +h);

    // mandar una nueva senial
    emit holaSenial();

}
