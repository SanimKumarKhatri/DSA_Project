#ifndef NEXTWINDOW_H
#define NEXTWINDOW_H

#include <QDialog>

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

    void on_gender_activated(int index);

private:
    Ui::nextwindow *ui;
};

#endif // NEXTWINDOW_H
