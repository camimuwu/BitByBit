#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0); // hace que abra en la primera pagina del stacked widget
    timer = new QTimer(this); // timer preguntas
    connect(timer, &QTimer::timeout, this, &MainWindow::actualizarTiempo);
    timerRespuesta = new QTimer(this); // timer de mostar respuesta correcta
    timerRespuesta->setSingleShot(true);
    connect(timerRespuesta, &QTimer::timeout, this, &MainWindow::generarPregunta);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_sumaButton_clicked()
{
    iniciarJuego(1);
}

void MainWindow::on_restaButton_clicked()
{
    iniciarJuego(2);
}

void MainWindow::on_divisionButton_clicked()
{
    iniciarJuego(3);
}

void MainWindow::on_multiplicacionButton_clicked()
{
    iniciarJuego(4);
}

void MainWindow::on_potenciaButton_clicked()
{
    iniciarJuego(5);
}

void MainWindow::on_raicesButton_clicked()
{
    iniciarJuego(6);
}

void MainWindow::iniciarJuego(int operacion)
{
    operacionActual = operacion;
    correctas = 0;
    incorrectas = 0;
    tiempoRestante = 30;

    ui->stackedWidget->setCurrentIndex(1);
    ui->tiempoLabel->setText("Tiempo: 30");

    srand(time(NULL));
    generarPregunta();
    timer->start(1000);
}

void MainWindow::generarPregunta()
{
    int min = 1, max = 10;
    int a = (rand() % max) + min;
    int b = (rand() % max) + min;

    QString pregunta;

    switch (operacionActual) {
    case 1:
        suma.setA(a); suma.setB(b);
        pregunta = QString("%1 + %2 = ?").arg(a).arg(b);
        break;
    case 2:
        resta.setA(a); resta.setB(b);
        pregunta = QString("%1 - %2 = ?").arg(a).arg(b);
        break;
    case 3:
        division.setA(a); division.setB(b);
        pregunta = QString("%1 / %2 = ?").arg(a * b).arg(a);
        break;
    case 4:
        multiplicacion.setA(a); multiplicacion.setB(b);
        pregunta = QString("%1 * %2 = ?").arg(a).arg(b);
        break;
    case 5:
        a = (rand() % 5) + 1;
        b = (rand() % 5) + 1;
        potencia.setA(a); potencia.setB(b);
        pregunta = QString("%1 ^ %2 = ?").arg(a).arg(b);
        break;
    case 6:
        pregunta = "Raices no disponible aun";
        break;
    }

    ui->ecuacionLabel->setText(pregunta);
    ui->respuestaLineEdit->clear();
    ui->resultadoLabel->setText("");
}

void MainWindow::on_responderButton_clicked()
{
    int respuesta = ui->respuestaLineEdit->text().toInt();
    int correcta = 0;

    switch (operacionActual) {
    case 1: correcta = suma.getA() + suma.getB(); break;
    case 2: correcta = resta.getA() - resta.getB(); break;
    case 3: correcta = division.getB(); break;
    case 4: correcta = multiplicacion.getA() * multiplicacion.getB(); break;
    case 5: correcta = std::pow(potencia.getA(), potencia.getB()); break;
    }

    if (respuesta == correcta) {
        ui->resultadoLabel->setText("¡Correcto!");
        correctas++;
    } else {
        ui->resultadoLabel->setText("Incorrecto. Era: " + QString::number(correcta));
        incorrectas++;
    }

    timerRespuesta->start(1000);
}

void MainWindow::actualizarTiempo()
{
    tiempoRestante--;
    ui->tiempoLabel->setText("Tiempo: " + QString::number(tiempoRestante));

    if (tiempoRestante <= 0) {
        timer->stop();
        terminarJuego();
    }
}

void MainWindow::terminarJuego()
{
    timer->stop();
    ui->resultadoFinalLabel->setText(
        "¡Tiempo!\n\nCorrectas: " + QString::number(correctas) +
        "\nIncorrectas: " + QString::number(incorrectas)
        );
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_volverButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}