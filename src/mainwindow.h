#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include "Suma.h"
#include "Resta.h"
#include "Division.h"
#include "Multiplicacion.h"
#include "Potencia.h"
#include "Raices.h"

// Clase MainWindow que representa la ventana principal de la aplicación
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

// Clase MainWindow que representa la ventana principal de la aplicación
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
// Constructor y destructor de la clase MainWindow
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private slots:
// Funciones para manejar los botones de operaciones
    void on_sumaButton_clicked();
    void on_restaButton_clicked();
    void on_divisionButton_clicked();
    void on_multiplicacionButton_clicked();
    void on_potenciaButton_clicked();
    void on_raicesButton_clicked();
    void on_responderButton_clicked();
    void actualizarTiempo();
    void on_volverButton_clicked();

private:
// Variables privadas de la clase MainWindow
    Ui::MainWindow *ui;
    QTimer *timer; // timer de 30 segundos
    QTimer *timerRespuesta; // timer de mostrar respuesta
    int tiempoRestante;
    int correctas;
    int incorrectas;
    int operacionActual;
// Instancias de las clases de operaciones
    Suma suma;
    Resta resta;
    Division division;
    Multiplicacion multiplicacion;
    Potencia potencia;
    Raices raices;
// Funciones privadas para manejar el juego
    void iniciarJuego(int operacion);
    void generarPregunta();
    void terminarJuego();
};

#endif // MAINWINDOW_H