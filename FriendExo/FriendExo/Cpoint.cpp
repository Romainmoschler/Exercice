#include "Cpoint.h"
#include <iostream>
using namespace std;
Cpoint::Cpoint()
{
	this->x = 0;
	this->y = 0;
}


Cpoint::Cpoint(int abs, int ord)
{
	this->x = abs;
	this->y = ord;
}


void affichePoint(Cpoint pt)
{
	cout << "x: " << pt.x << "  y: " << pt.y << endl;
}
