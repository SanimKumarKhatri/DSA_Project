#ifndef NEXTWINDOW_H
#define NEXTWINDOW_H

#include <QDialog>
#include "data_without_file.h"

namespace Ui {
class nextwindow;
}

class nextwindow : public QDialog
{
    Q_OBJECT

public:
    explicit nextwindow(QWidget *parent = nullptr);
    ~nextwindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::nextwindow *ui;
};

#endif // NEXTWINDOW_H
