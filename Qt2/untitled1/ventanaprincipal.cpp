#include "ventanaprincipal.h"
#include "ui_ventanaprincipal.h"
#include <qfiledialog.h>
#include <qpixmap.h>
#include <qimage.h>

ventanaPrincipal::ventanaPrincipal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ventanaPrincipal)
{
    ui->setupUi(this);

    // conectar los objetos con una senial y la senial con un slot
    connect( ui->pushButton, SIGNAL(clicked()), this, SLOT(SaludarUsuario()));

    connect( ui->pushButton_2, SIGNAL(clicked()), this, SLOT(DespedirUsuario()));

    connect( ui->pushButton_3, SIGNAL(clicked(bool)), this, SLOT(AgregarCombo()));

    // conectar los objetos con una senial
    connect( ui->pushButton_4, SIGNAL(clicked(bool)), this, SLOT(MoverTextoB2A()));

    // conectar las seniales con los objetos y los
    connect( ui->pushButton_6, SIGNAL(clicked(bool)), this, SLOT(cargarImagen()));


}

int ventanaPrincipal::cargarImagen(){

    // abrir un commmand dialog
    QString ruta = QFileDialog::getOpenFileName( this,"abrir imagen", "/home/frodo/Documentos/","Images(*.png *.jpg *.bmp)");

    // crear un mapa de pixeles y cargar la ruta de la imagen
    QPixmap fondo;
    fondo.load(ruta);


    // cargar la imagen en el label
    ui->label_2->setPixmap(fondo.scaled( ui->label_2->width(), ui->label_2->height(), Qt::KeepAspectRatio));

}

ventanaPrincipal::~ventanaPrincipal()
{
    delete ui;
}

int ventanaPrincipal::SaludarUsuario(){

    ui->label->setText("Hola mundo!");

}


int ventanaPrincipal::AgregarCombo(){

    ui->comboBox->addItem( "hola" );

}


int ventanaPrincipal::MoverTextoB2A(){
    ui->textEdit->setText( ui->plainTextEdit->toPlainText());
}

int ventanaPrincipal::DespedirUsuario(){
    ui->label->setText("Adios mundo!");
}
