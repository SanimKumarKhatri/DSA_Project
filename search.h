#ifndef SEARCH_H
#define SEARCH_H

#include <QDialog>
#include "bst.h"
#include "menu.h"
#include "edit_data.h"

extern BST bigdata;

namespace Ui {
class search;
}

class search : public QDialog
{
    Q_OBJECT

public:
    bool found;
    explicit search(QWidget *parent = nullptr);
    Patient p;
    ~search();

private slots:
    void on_searchbutton_clicked();

    void on_deletebutton_clicked();

    void on_editbutton_clicked();

    void on_backbutton_clicked();

private:
    Ui::search *ui;
};

#endif // SEARCH_H
