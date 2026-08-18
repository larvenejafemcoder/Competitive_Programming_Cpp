#include <iostream>

void printNum(int myNum);

int myNum = 3;

int main()
{
  // Local variables = declared inside a function or a block of {}
  // Global variables = declared outside of all function and the top of the head function int main()
  int myNum = 1;
  printNum(myNum);

  std::cout << myNum << "\n";


  return 0;
}

void printNum(int myNum){
  //int myNum = 2;
  std::cout << myNum << "\n";
}
