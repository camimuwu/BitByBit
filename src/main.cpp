#include "mainwindow.h"

#include <QApplication>

// Función principal que inicia la aplicación
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return QApplication::exec();
}
