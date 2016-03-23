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

	for (grille[i][j])
	{
	  //horizontal

	    if (grille[i+3][j] == grille[i+2][j] && grille[i+2][j] == grille[i+1][j] && grille[i+1][j] == grille[i][j] && grille[i][j] != 0)
	    	{
	        	return grille[i][j];
	    	}

		if (grille[i+2][j] == grille[i+1][j] && grille[i+1][j] == grille[i][j] && grille[i][j] == grille[i-1][j] && grille[i][j] != 0)
	    	{
	        	return grille[i][j];
	    	}

		if (grille[i+1][j] == grille[i][j] && grille[i][j] == grille[i-1][j] && grille[i-1][j] == grille[i-2][j] && grille[i][j] != 0)
			{
	        	return grille[i][j];
	    	}

		if (grille[i][j] == grille[i-1][j] && grille[i-1][j] == grille[i-2][j] && grille[i-2][j] == grille[i-3][j] && grille[i][j] != 0)
	    	{
	        	return grille[i][j];
	    	}

		//verticale

		if (grille[i][j+3] == grille[i][j+2] && grille[i][j+2] == grille[i][j+1] && grille[i][j+1] == grille[i][j] && grille[i][j] != 0)
	    	{
	        	return grille[i][j];
	    	}

		if (grille[i][j+2] == grille[i][j+1] && grille[i][j+1] == grille[i][j] && grille[i][j] == grille[i][j-1] && grille[i][j] != 0)
	    	{
	        	return grille[i][j];
	    	}

		if (grille[i][j+1] == grille[i][j] && grille[i][j] == grille[i][j-1] && grille[i][j-1] == grille[i][j-2] && grille[i][j] != 0)
	    	{
	        	return grille[i][j];
	    	}

		if (grille[i][j] == grille[i][j-1] && grille[i][j-1] == grille[i][j-2] && grille[i][j-2] == grille[i][j-3] && grille[i][j] != 0)
	    	{
	        	return grille[i][j];
	    	}

		//f(x)=-x

		if (grille[i-3][j+3] == grille[i-2][j+2] && grille[i-2][j+2] == grille[i-1][j+1] && grille[i-1][j+1] == grille[i][j] && grille[i][j] != 0)
	    	{
	        	return grille[i][j];
	    	}

		if (grille[i-2][j+2] == grille[i-1][j+1] && grille[i-1][j+1] == grille[i][j] && grille[i][j] == grille[i+1][j-1] && grille[i][j] != 0)
	    	{
	        	return grille[i][j];
	    	}

		if (grille[i-1][j+1] == grille[i][j] && grille[i][j] == grille[i+1][j-1] && grille[i+1][j-1] == grille[i+2][j-2] && grille[i][j] != 0)
	    	{
	        	return grille[i][j];
	    	} 

		if (grille[i][j] == grille[i+1][j-1] && grille[i+1][j-1] == grille[i+2][j-2] && grille[i+2][j-2] == grille[i+3][j-3] && grille[i][j] != 0)
	    	{
	        	return grille[i][j];
	    	}

		//f(x)=x

		if (grille[i+3][j+3] == grille[i+2][j+2] && grille[i+2][j+2] == grille[i+1][j+1] && grille[i+1][j+1] == grille[i][j] && grille[i][j] != 0)
	    	{
	        	return grille[i][j];
	    	}

		if (grille[i+2][j+2] == grille[i+1][j+1] && grille[i+1][j+1] == grille[i][j] && grille[i][j] == grille[i-1][j-1] && grille[i][j] != 0)
	    	{
	        	return grille[i][j];
	    	}    

		if (grille[i+1][j+1] == grille[i][j] && grille[i][j] == grille[i-1][j-1] && grille[i-1][j-1] == grille[i-2][j-2] && grille[i][j] != 0)
	    	{
	        	return grille[i][j];
	    	}

		if (grille[i][j] == grille[i-1][j-1] && grille[i-1][j-1] == grille[i-2][j-2] && grille[i-2][j-2] == grille[i-3][j-3] && grille[i][j] != 0)
	    	{
	        	return grille[i][j];
	    	}
	}
}	
    return 0;
}
