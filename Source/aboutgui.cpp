#include "aboutgui.h"
#include "ui_aboutgui.h"

AboutGUI::AboutGUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutGUI)
{
    ui->setupUi(this);
}

AboutGUI::~AboutGUI()
{
    delete ui;
}
