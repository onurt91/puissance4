#include "fenetre.h"
#include "ui_fenetre.h"
#include "puissance4.h"

Fenetre::Fenetre(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Fenetre)
{
    ui->setupUi(this);

    QObject::connect(ui->boutonResetPartie, SIGNAL(pressed()), this, SLOT(cliqueBoutonResetPartie()));
    QObject::connect(ui->boutonResetScore, SIGNAL(pressed()), this, SLOT(cliqueBoutonResetScore()));

}

Fenetre::~Fenetre()
{
    delete ui;
}

void Fenetre::cliqueBoutonResetPartie()
{
    p4->resetPartie();
    this->mettreAJour();
}

void Fenetre::cliqueBoutonResetScore()
{
    p4->resetScore();
    this->mettreAJour();
}

void Fenetre::mettreAJour()
{
    ui->score->clear();
    ui->score->setText(QString::number(p4->getScoreJ1()) + " : " + QString::number(p4->getScoreJ2()));
}
