#include "digicode.h"
#include "ui_digicode.h"
#include <QJSEngine>
#include <QString>
#include <QMessageBox>

Digicode::Digicode(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Digicode)
    , NB_TOUCHES(16)
{
    int colonne=0, ligne=0;
    grille = new QGridLayout(this);
    afficheur = new QLineEdit(this);
    afficheur->setReadOnly(true);
    afficheur->setAlignment(Qt::AlignRight);
    afficheur->setEchoMode(QLineEdit::Password);
    afficheur->setMinimumHeight(80);
    grille->addWidget(afficheur,ligne,colonne,1,3);
    // Création du clavier
    QString TableDesSymboles[] = {"7","8","9",
                                  "4","5","6",
                                  "1","2","3",
                                  "On","0","Ok"};

    touches = new QPushButton*[NB_TOUCHES];

    int i=0;
    for (int ligne=1; ligne<5; ligne++){
        for(int colonne=0; colonne<3;colonne++)
        {
            touches[i] = new QPushButton;
            touches[i]->setText(TableDesSymboles[i]);
            touches[i]->setMinimumWidth(80);
            touches[i]->setMaximumHeight(80);
            touches[i]->setStyleSheet("background-color: rgb(150, 150, 150);");

            grille->addWidget(touches[i],ligne,colonne);

            connect(touches[i], &QPushButton::clicked,
                    this, &Digicode::onQPushButtonClicked);
            i++;
        }
    }
    this->setLayout(grille);
}

Digicode::~Digicode()
{
    delete ui;
}


void Digicode::onQPushButtonClicked()
{
    QPushButton *touche;
    touche=qobject_cast<QPushButton*>(sender());
    QString valTouche = touche->text();
    codeSecret="0000";
    code = afficheur->text();
    QMessageBox messageCode;

    if(valTouche =="Ok")
    {

        if (code == codeSecret)
        {
            messageCode.setText("La porte est déverrouillée");
        }

        else
        {
            messageCode.setText("Code Faux");
        }

        messageCode.exec();
    }

    if (valTouche =="On")
    {
        afficheur->clear();
    }

    else
    {
        afficheur-> setText(afficheur->text()+valTouche);
    }
}

