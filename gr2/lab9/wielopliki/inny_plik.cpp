#include "inny_plik.hpp"
//#include <inny_plik.hpp>

unsigned dodaj(unsigned a, unsigned b)
{
	return a + b;
}

unsigned odejmij(unsigned a, unsigned b)
{
	if (a >= b)
		return a - b;
	else
		return 0;
}
