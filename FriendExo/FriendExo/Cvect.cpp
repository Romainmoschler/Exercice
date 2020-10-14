#include "Cvect.h"
#include <iostream>
using namespace std;


Cvect::Cvect()
{
	this->m_x = 0.0;
	this->m_y = 0.0;
	this->m_z = 0.0;
}

Cvect::Cvect(double x, double y, double z)
{
	this->m_x = x;
	this->m_y = y;
	this->m_z = z;
}

void afficheVect(Cvect vect)
{
	cout << "x: " << vect.m_x << endl;
	cout << "y: " << vect.m_y << endl;
	cout << "z: " << vect.m_z << endl;
}
