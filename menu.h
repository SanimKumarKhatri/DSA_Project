#ifndef MENU_H
#define MENU_H

#include <QDialog>
#include "addwindow.h"
#include "search.h"
#include "login.h"

namespace Ui {
class menu;
}

class menu : public QDialog
{
    Q_OBJECT

public:
    explicit menu(QWidget *parent = nullptr);
    ~menu();

private slots:
    void on_addbutton_clicked();

    void on_searchbutton_clicked();

private:
    Ui::menu *ui;
};

#endif // MENU_H
