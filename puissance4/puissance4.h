#ifndef PUISSANCE4_H
#define PUISSANCE4_H


class Puissance4
{
    public:
        Puissance4();
        int getJoueurActuel();
        void resetPartie();
        void resetScore();
        int detectionFinDePartie();
        void jouer(int x, int y);
        void changementJoueur();

    private:
        int scoreJ1;
        int scoreJ2;
        int grille[][6];
        int joueurActuel;
};

#endif // PUISSANCE4_H
