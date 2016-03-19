#ifndef FENETRE_H
#define FENETRE_H

#include <QMainWindow>
#include <QTableWidgetItem>
#include "puissance4.h"

namespace Ui {
class Fenetre;
}

class Fenetre : public QMainWindow
{
    Q_OBJECT

public:
    explicit Fenetre(QWidget *parent = 0);
    ~Fenetre();
    void mettreAJour();

public slots:
    void cliqueBoutonResetScore();
    void cliqueBoutonResetPartie();

private:
    Ui::Fenetre *ui;
    Puissance4 *p4 = new Puissance4;
    QTableWidgetItem *cellule;
};

#endif // FENETRE_H
