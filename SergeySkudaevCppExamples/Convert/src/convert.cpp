// Convert.cpp 
// Converts pounds to kilograms in a procedural way

#include <iostream>

int main(int argc, char* argv[])
{
	double lb;
	double kg;
	double c;

	std::cout << "Converting Pounds to Kilograms" << std::endl;
	std::cout << "\nPlease enter a mass in pounds (lbs): ";
	std::cin >> lb;

	c = 0.45359237;
	kg = c * lb;

	std::cout << lb << "lb = " << kg << "kg " << std::endl;

	int hold = 1;
	std::cin >> hold;

	return 0;
}