#include <iostream>
#include <vector>
#include <string>
#include <cmath>


int main()
{
	double a{0};
	double b{0};

	std::cout << "Please, enter the first number: ";
	std::cin >> a;

	std::cout << "Please, enter the second number: ";
	std::cin >> b;

	double hyponetuse = sqrt((a * a) + (b * b));

	std::cout << "The hypotenuse is: " << hyponetuse << std::endl;

}

