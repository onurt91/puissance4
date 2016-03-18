#include <stdio.h>
int casesDejaJouees(int x, int y, int grille[][6])
{
    if (grille[x][y] == 1 || grille[x][y] == 2)
	{
        //Faire lien avec affichage message erreur case deja jouée
        return grille[x][y];
	}

    return 0;

}
