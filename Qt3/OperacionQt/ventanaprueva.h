#ifndef VENTANAPRUEVA_H
#define VENTANAPRUEVA_H

#include <QMainWindow>

namespace Ui {
class VentanaPrueva;
}

class VentanaPrueva : public QMainWindow
{
    Q_OBJECT

public:
    explicit VentanaPrueva(QWidget *parent = 0);
    ~VentanaPrueva();

signals:
    void holaSenial();

private slots:
    void decirHola();

private:
    Ui::VentanaPrueva *ui;
};

/* los archivos .h controlan y manipulan los controles */


#endif // VENTANAPRUEVA_H
