#include "convert.h"

double convertlbtokg(double lb)
{
	double c = 0.45359237;
	double kg;
	
	kg = lb * c;

	return kg;
}
