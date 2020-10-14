#include "Cvecteur3d.h"

Cvecteur3d::Cvecteur3d()
{
	this->m_x = 0.0;
	this->m_x = 0.0;
	this->m_x = 0.0;
}

Cvecteur3d::Cvecteur3d(float x, float y, float z)
{
	this->m_x = x;
	this->m_y = y;
	this->m_z = z;
}

bool coincide(Cvecteur3d vect1, Cvecteur3d vect2)
{
	if (vect1.m_x==vect2.m_x && vect1.m_y==vect2.m_y && vect1.m_z==vect2.m_z)
	{
		return true;

	}
	else
	{
		return false;
	}
}
