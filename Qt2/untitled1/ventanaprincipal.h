#ifndef VENTANAPRINCIPAL_H
#define VENTANAPRINCIPAL_H

#include <QMainWindow>

namespace Ui {
class ventanaPrincipal;
}

class ventanaPrincipal : public QMainWindow
{

    Q_OBJECT

public:
    explicit ventanaPrincipal(QWidget *parent = 0);
    ~ventanaPrincipal();

private slots:
    int SaludarUsuario();
    int DespedirUsuario();
    int AgregarCombo ();
    int MoverTextoB2A();
    int cargarImagen ();


private:
    Ui::ventanaPrincipal *ui;
};

#endif // VENTANAPRINCIPAL_H
