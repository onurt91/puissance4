#include <stdio.h>
int detectionFinPartie( int grille[][6] )
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
