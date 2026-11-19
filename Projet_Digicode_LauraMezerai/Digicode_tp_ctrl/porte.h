#ifndef PORTE_H
#define PORTE_H

#include <QDialog>
#include <QLabel>

namespace Ui {
class Porte;
}

class Porte : public QDialog
{
    Q_OBJECT

public:
    explicit Porte(QWidget *parent = nullptr);
    ~Porte();
    void Deverouiller();
    void Verouiller();

private:
    Ui::Porte *ui;
    QLabel *labelEtat = new QLabel();
    QLabel *labelImage = new QLabel();
};

#endif // PORTE_H