#include "Cmatrice.h"
#include "Cvect.h"
#include <cstdlib>

Cmatrice::Cmatrice()
{
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			this->mtab_mat[i][j] = rand() % 21;
		}

	}
}

Cvect Cmatrice::prodMat(Cvect &vect)
{
	vect.m_x = vect.m_x*this->mtab_mat[0][0] + vect.m_x*this->mtab_mat[1][0] + vect.m_x*this->mtab_mat[2][0];
	vect.m_y = vect.m_y*this->mtab_mat[0][1] + vect.m_y*this->mtab_mat[1][1] + vect.m_y*this->mtab_mat[2][1];
	vect.m_z = vect.m_z*this->mtab_mat[0][2] + vect.m_z*this->mtab_mat[1][2] + vect.m_z*this->mtab_mat[2][2];
	return vect;
}
