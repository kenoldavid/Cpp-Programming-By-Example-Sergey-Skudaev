#include <iostream>
#include "convert.h"

int main(int argc, char* argv[])
{
	double lb;
	double kg;

	std::cout << "\nPlease enter a mass in pounds: ";
	std::cin >> lb;

	kg = convertlbtokg(lb);

	std::cout << lb << " lb = " << kg << " kg" << std::endl;

	int hold = 1;
	std::cin >> hold;

	return 0;
}