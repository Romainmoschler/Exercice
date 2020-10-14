#pragma once
class Cvect;
class Cmatrice
{
private:

	double mtab_mat[3][3];

public:
	Cmatrice();
	Cvect prodMat(Cvect &vect);


};
