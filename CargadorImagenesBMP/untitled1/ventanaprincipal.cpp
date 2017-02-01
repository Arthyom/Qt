#include "ventanaprincipal.h"
#include "ui_ventanaprincipal.h"
#include <iostream>
#include <qfiledialog.h>
#include <qpixmap.h>
#include <qimage.h>
#include <QList>

using namespace std;

VentanaPrincipal::VentanaPrincipal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VentanaPrincipal)
{
    ui->setupUi(this);

    // crear coneccion
    connect(ui->pushButton,SIGNAL(clicked(bool)), this, SLOT(CargarAlter()));

    connect(ui->pushButton_2,SIGNAL(clicked(bool)), this, SLOT(SalvarImagen()));

    connect( ui->pushButton_3, SIGNAL(clicked(bool)), this, SLOT(NuevaBlack()));


    ui->lineEdit->setText("512");
    ui->lineEdit_2->setText("512");

}

VentanaPrincipal::~VentanaPrincipal()
{
    delete ui;
}

int VentanaPrincipal::CargarImagen(){


    // abrir un dialogo y conseguir la ruta de la imagen
    QString ruta = QFileDialog::getOpenFileName(this,"Seleccione una imagen para Cargar", "/home/frodo/", "Images(*.bmp *.jpg *.jpeg *.png)");

    // crear un pixmap
    QPixmap fondo ;
    fondo.load(ruta);


    ui->label->setPixmap(fondo.scaled( ui->label->width(), ui->label->height(),Qt::KeepAspectRatio));

}

int VentanaPrincipal::SalvarImagen(){

    // conseguir ruta de guardado
    QString ruta = QFileDialog::getSaveFileName( this, "Seleccione la ruta de guardado", "/home/frodo/", "Images(*.bmp *.jpeg *.jpg *.png)");
    // escribir la imagen salvada
    this->imagenEntrada->save( ruta, "PNG");

}

int VentanaPrincipal::CargarAlter(){


    // abrir un dialogo y conseguir la ruta de la imagen
    QString ruta = QFileDialog::getOpenFileName(this,"Seleccione una imagen para Cargar", "/home/frodo/", "Images(*.bmp *.jpg *.jpeg *.png)");

    // crear un pixmap
    QImage imag;
    imag.load(ruta);
    QImage * imSa;

    imSa = new QImage( imag.width(), imag.height(),QImage::Format_ARGB32);

    for (int i = 0; i < imag.height(); i++) {
        cout<<endl;
        for (int j = 0; j < imag.width();j++) {

            QColor clr = imag.pixel(j,i);


            imSa->setPixel(j,i, clr.rgb());
        }
    }

    this->imagenEntrada = imSa;

    ui->label->setPixmap( QPixmap::fromImage(imag).scaled(ui->label->width(), ui->label->height(), Qt::KeepAspectRatio));
    ui->label_2->setPixmap( QPixmap::fromImage(*imSa).scaled(ui->label_2->width(), ui->label_2->height(), Qt::KeepAspectRatio));
}

int VentanaPrincipal::NuevaBlack(){

    int barras = 8;

    int w = ui->lineEdit->text().toInt();
    int h = ui->lineEdit->text().toInt();
    QImage * nm = new QImage(w,h,QImage::Format_ARGB32);

    for (int i = 0; i < nm->height(); i++) {
        cout<<endl;
        for (int j = 0; j < nm->width();j++) {

            QColor *c = new QColor(0,0,0);

            nm->setPixel(j,i, c->rgb());
        }
    }

    nm->save("/home/frodo/imn", "PNG");

    // crear otras imagenes
    CrearBarras( w,h, barras);
    CrearAjedrez(w,h, barras);

}

void VentanaPrincipal::CrearAjedrez( int w, int h, int barras ){

    // crear una nueva imagen
    QImage * ajedrez = new QImage (w,h, QImage::Format_ARGB32);

   // iterar para cada linea vertical en el ajedrez
    for (int b = 0; b < barras; b++ ) {

        // iterar hasta la barra B
        for ( int i =  b*(w/barras) ; i < ((b+1)*(w/barras)) ; i ++ ) {

            // crear un nuevo color
            QColor * c = new QColor();

            for ( int ba = 0 ; ba < barras ; ba ++ ){

                // limitar la altura de la barra B

                if ( ba % 2 == 0 ){
                    for (int j = ba*(h/barras) ; j < ((ba+1)*(h/barras)) ; j ++) {

                        if ( b % 2 == 0 )
                            ajedrez->setPixel(i,j , c->fromRgb(0,0,0).rgb() );

                        else
                            ajedrez->setPixel(i,j, c->fromRgb(255,255,255).rgb());
                    }
                }
                    else
                    {
                        for (int j = ba*(h/barras) ; j < ((ba+1)*(h/barras)) ; j ++) {

                            if ( b % 2 != 0 )
                                ajedrez->setPixel(i,j , c->fromRgb(0,0,0).rgb() );

                            else
                                ajedrez->setPixel(i,j, c->fromRgb(255,255,255).rgb());
                        }
                    }
                }
            }
        }

    ajedrez->save("/home/frodo/imnChess.png", "png");

}


void VentanaPrincipal::CrearBarras(int w, int h, int barras){
    //crear una nueva imagen
    QImage *barra = new QImage(w,h, QImage::Format_RGB32);


    int c1[] = {255,255,255};
    int c2[] = {255,255,0};
    int c3[] = {255,0,255};
    int c4[] = {0,255,255};
    int c5[] = {0,0,255};
    int c6[] = {0,255,0};
    int c7[] = {255,0,0};
    int c8[] = {0,0,0};


    QList<int *> l;

    l.append(c1);
    l.append(c2);
    l.append(c3);
    l.append(c4);
    l.append(c5);
    l.append(c6);
    l.append(c7);
    l.append(c8);



    // iterar para cada barra
    for ( int b = 0; b < barras ; b ++ ){

        QColor *c = new QColor();

        // extraer color de la lista
        int * ext = l.at(b);

        for ( int i =  b*(w/barras) ; i < ((b+1)*(w/barras)) ; i ++ ){
            for ( int j = 0 ; j < h ; j ++ ){
                 barra->setPixel( i ,j , c->fromRgb(ext[0], ext[1],ext[2]).rgb());
            }
        }
    }

    // salvar la imagen de las barras
    barra->save("/home/frodo/imnBarra.png", "png");



}
