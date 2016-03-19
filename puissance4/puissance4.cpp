#include "puissance4.h"

Puissance4::Puissance4()
{
    scoreJ1 = 0;
    scoreJ2 = 0;
    joueurActuel = 1; //Pour le moment, apres on pourra config
}

void Puissance4::resetPartie()
{

}

void Puissance4::resetScore()
{
    scoreJ1 = 0;
    scoreJ2 = 0;
}

void Puissance4::augmenterScore(int gagant)
{

}

int Puissance4::getJoueurActuel()
{

}

int Puissance4::getScoreJ1()
{
    return scoreJ1;
}

int Puissance4::getScoreJ2()
{
    return scoreJ2;
}

void Puissance4::jouer(int x, int y)
{
    if (grille[x][y] == 1 || grille[x][y] == 2)
    {
        //Faire lien avec affichage message erreur case deja jouée
    }
    else
    {
        grille[x][y] = joueurActuel;
        this->changementJoueur();
    }

}

void Puissance4::changementJoueur()
{
    if (joueurActuel == 1)
    {
        joueurActuel = 2;
    }
    else if (joueurActuel == 2)
    {
        joueurActuel = 1;
    }
}

int Puissance4::detectionFinDePartie()
{

    //On test les lignes
    for (int j = 0; j < 6; ++j)
    {
        for (int i = 0; i < 3; ++i)
        {
            if (grille[i][j] == grille[i+1][j] && grille[i+1][j] == grille[i+2][j] && grille[i+2][j] == grille[i+3][j] && grille[i][j] != 0)
            {
                return grille[i][j];
            }
        }
    }

    //On test les colonnes
    for (int i = 0; i < 7; ++i)
    {
        for (int j = 0; j < 2; ++i)
        {
            if (grille[i][j] == grille[i][j+1] && grille[i][j+1] == grille[i][j+2] && grille[i][j+2] == grille[i][j+3] && grille[i][j] != 0)
            {
                return grille[i][j];
            }
        }
    }

    //On test les diagonnales
    if (grille[0][2] == grille[1][3] && grille[1][3] == grille[2][4] && grille[2][4] == grille[3][5] && grille[0][3] != 0)
    {
        return grille[0][3];
    }
    if (grille[3][0] == grille[4][1] && grille[4][1] == grille[5][2] && grille[5][2] == grille[6][3] && grille[3][0] != 0)
    {
        return grille[3][0];
    }
    for (int i = 0; i < 2; ++i)
    {
        if (grille[0+i][1+i] == grille[1+i][2+i] && grille[1+i][2+i] == grille[2+i][3+i]
                && grille[2+i][3+i] == grille[3+i][4+i] && grille[3+i][4+i] == grille[4+i][5+i] && grille[2][3] != 0)
        {
            return grille[2][3];
        }
    }
    for (int i = 0; i < 3; ++i)
    {
        if (grille[0+i][0+i] == grille[1+i][1+i] && grille[1+i][1+i] == grille[2+i][2+i]
                && grille[2+i][2+i] == grille[3+i][3+i] && grille[3+i][3+i] == grille[4+i][4+i] && grille[3][3] != 0)
        {
            return grille[3][3];
        }
    }
    for (int i = 0; i < 4; ++i)
    {
        if (grille[2+i][0+i] == grille[3+i][1+i] && grille[3+i][1+i] == grille[4+i][2+i]
                && grille[4+i][2+i] == grille[5+i][3+i] && grille[5+i][3+i] == grille[6+i][4+i] && grille[4][2] != 0)
        {
            return grille[4][2];
        }
    }

    //************************************//
    //Rajouter les diago dans l'autre sens//
    //************************************//

    return 0;
}
