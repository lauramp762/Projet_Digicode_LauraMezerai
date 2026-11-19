#include "porte.h"
#include "ui_porte.h"
#include <QLabel>

Porte::Porte(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Porte)
{
    ui->setupUi(this);
    Verouiller();
}

Porte::~Porte()
{
    delete ui;
}

void Porte::Deverouiller()
{
    labelEtat->setText("La porte est déverrouiller");
    labelImage->setPixmap(QPixmap(":/img/porte_ouverte.png"));
}

void Porte::Verouiller()
{
    labelEtat->setText("La porte est verrouiller");
    labelImage->setPixmap(QPixmap(":/img/porte_fermee.png"));
}
