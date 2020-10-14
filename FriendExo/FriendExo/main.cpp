#include "Cpoint.h"
#include "Cvecteur3d.h"
#include "Cmatrice.h"
#include "Cvect.h"
#include <iostream>

using namespace std;

int main()
{
	Cpoint Cp_point(10, 26);
	Cpoint Cp_point2;

	affichePoint(Cp_point);

	Cvecteur3d vct_vecteur1;
	Cvecteur3d vct_vecteur2(15.5,12.0,7.6);
	if (coincide(vct_vecteur1, vct_vecteur2) == true)
	{
		cout << "Les deux vecteur coincide" << endl;
	}
	else
	{
		cout << "ils ne coincide pas" << endl;
	}

	Cvect vect1(10,2,4);
	Cmatrice matrice1;

	matrice1.prodMat(vect1);

	afficheVect(vect1);

	return 0;
}
