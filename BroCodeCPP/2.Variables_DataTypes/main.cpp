#include <iostream>

int main()
{
	int x; // declaration
	x = 5; // assignment
	int y = 6;
	int sum = x + y;

	std::cout << x << std::endl;
	std::cout << y << std::endl;
	std::cout << sum << std::endl;

	// integer (whole number)

	int age = 21;
	int year = 2023;
	int days = 7.5;

	std::cout << days << std::endl;

	// double (number including decimal)

	double price = 10.99;
	double gpa = 2.5;
	double temperature = 25.1;

	std::cout << price << std::endl;

	// single character

	char grade = 'A';
	char initial = 'B';
	char currency = '$';

	std::cout << currency << std::endl;

	// boolean (true or false)

	bool student = false;
	bool power = true;
	bool forSale = true;

	// string (objects that represent a sequence of text)

	std::string name = "Bro";
	std::string day = "Friday";
	std::string food = "pizza";
	std::string address = "123 Fake St.";

	std::cout << name << std::endl;

	std::cout << "Hello " << name << std::endl;
	std::cout << "You are " << age << " years old" << std::endl;

	return 0;
}