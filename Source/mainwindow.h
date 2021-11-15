#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionRegistrar_Local_triggered();

    void on_actionAcerca_de_triggered();

    void on_actionMostrar_Locales_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
