#ifndef PUISSANCE4_H
#define PUISSANCE4_H


class Puissance4
{
    public:
        Puissance4();
        int getJoueurActuel(); //A faire -tres facile
        int getScoreJ1(); //A faire -tres facile
        int getScoreJ2(); //A faire -tres facile

        void resetPartie(); //A faire -tres facile
        void resetScore(); //A faire -tres facile
        int detectionFinDePartie(); //A finir (les autres diagos) -facile, juste refaire dans l'autre sens
        void jouer(int x, int y);
        void changementJoueur();
        void augmenterScore(int gagant);//A faire -tres facile
        //rajouter d'autres fonctions et les faire

    private:
        int scoreJ1;
        int scoreJ2;
        int grille[][6];
        int joueurActuel;
        //rajouter d'autres variables si necessaire
};

#endif // PUISSANCE4_H
