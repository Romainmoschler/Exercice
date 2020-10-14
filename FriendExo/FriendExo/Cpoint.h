#pragma once
class Cpoint
{
private:
	int x;
	int y;
public:
	Cpoint(int abs, int ord);
	Cpoint();

	friend void affichePoint(Cpoint pt);
};

