#include <iostream>

int main()
{
	// The const key word specifies that a variable's value is constant
	// Tells the compiler to prevent anything from modifying it
	// (read-only)
	const double PI = 3.14159;
	double radius = 10;
	double circumference = 2 * PI * radius;

	std::cout << circumference << " cm" << std::endl;

	const int LIGHT_SPEED = 2999792458;
	const int WIDTH = 1920;
	const int HEIGHT = 1080;

	std::cout << LIGHT_SPEED << std::endl;
	std::cout << WIDTH << "x" << HEIGHT<< std::endl;
}