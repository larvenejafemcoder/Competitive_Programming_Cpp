#include <iostream>

double square(double length);
double cube(double length);
std::string conCatString(std::string stringOne, std::string stringTwo);

int main()
{
  //return = return a value back to the spot 
  //         where you called the encompassing function
  //
  
  double length = 5.0;

  double area  = square(length);
  double volume = cube(length);

  std::string FirstName = "Thomas";
  std::string LastName = "Caston";

  std::string FullName = conCatString(FirstName, LastName);

  std::cout << "Hello " << FullName << "\n";

  std::cout << "Area" << area << "cm^2\n";

  std::cout << "Volume" << volume << "cm^3\n";


  return 0;
}

double square(double length){
  double result = length * length;
  return result;
}

double cube(double length){
  double result = length * length * length;
  return result;
}

std::string conCatString(std::string stringOne, std::string stringTwo){
  return stringOne + " " + stringTwo;
}
