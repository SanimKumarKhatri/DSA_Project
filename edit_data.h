#ifndef EDIT_DATA_H
#define EDIT_DATA_H

#include <QDialog>
#include "bst.h"

#include "menu.h"

extern BST bigdata;

namespace Ui {
class Edit_data;
}

class Edit_data : public QDialog
{
    Q_OBJECT

public:
    int num;
    explicit Edit_data(Patient *p,QWidget *parent = nullptr);
    ~Edit_data();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Edit_data *ui;
};

#endif // EDIT_DATA_H
