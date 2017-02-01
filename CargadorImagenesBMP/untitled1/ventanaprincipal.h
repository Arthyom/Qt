#ifndef VENTANAPRINCIPAL_H
#define VENTANAPRINCIPAL_H

#include <QMainWindow>

namespace Ui {
class VentanaPrincipal;
}

class VentanaPrincipal : public QMainWindow
{
    Q_OBJECT

public:
    explicit VentanaPrincipal(QWidget *parent = 0);
    int                indxGlobal = 0;
    QList  <QImage*> * imagenSalida ;
    ~VentanaPrincipal();

private slots:
    int     CargarImagen();
    int     CargarAlter();
    int     SalvarImagen();
    int     NuevaBlack();
    void    CrearAjedrez (int w, int h, int b);
    void    CrearBarras  (int w, int h, int b);
    void    AntImagen();
    void    SigImagen();

private:
    Ui::VentanaPrincipal *ui;
    QImage * imagenEntrada;
};

#endif // VENTANAPRINCIPAL_H
