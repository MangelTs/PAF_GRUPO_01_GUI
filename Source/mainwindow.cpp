#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <registrolocalgui.h>
#include <aboutgui.h>
#include <mostrarlotesgui.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->showMaximized();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionRegistrar_Local_triggered()
{
    registroLocalGUI *local = new registroLocalGUI();
    local->show();
}

void MainWindow::on_actionAcerca_de_triggered()
{
    AboutGUI *about = new AboutGUI();
    about->show();
}

void MainWindow::on_actionMostrar_Locales_triggered()
{
    mostrarLotesGUI *mosLotes = new mostrarLotesGUI;
    mosLotes->show();
}
