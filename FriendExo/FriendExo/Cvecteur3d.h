#pragma once
class Cvecteur3d
{
private:
	float m_x;
	float m_y;
	float m_z;
public:
	Cvecteur3d();
	Cvecteur3d(float x, float y, float z);

	friend bool coincide(Cvecteur3d vect1, Cvecteur3d vect2);
};

