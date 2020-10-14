#pragma once
#include "Cmatrice.h"
class Cmatrice;
class Cvect
{
private:
	double m_x;
	double m_y;
	double m_z;
public:
	Cvect();
	Cvect(double x, double y, double z);

	friend void afficheVect(Cvect vect);
	friend Cvect Cmatrice::prodMat(Cvect &vect);
};

