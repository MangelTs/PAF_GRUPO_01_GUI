#ifndef ABOUTGUI_H
#define ABOUTGUI_H

#include <QDialog>

namespace Ui {
class AboutGUI;
}

class AboutGUI : public QDialog
{
    Q_OBJECT

public:
    explicit AboutGUI(QWidget *parent = nullptr);
    ~AboutGUI();

private:
    Ui::AboutGUI *ui;
};

#endif // ABOUTGUI_H
