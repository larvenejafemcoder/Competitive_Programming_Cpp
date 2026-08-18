#include <iostream>

int main()
{
  int num;
  int tries;
  int guess;

  srand(time(NULL));
  num = (rand() % 100) + 1;

  std::cout << "******** NUMBER GUESSING GAME ********" << "\n";
  do {
    std::cout << "Guess a number between 1-100: " << "\n";
    std::cin >> guess;
    tries++;

    if(guess > num){
      std::cout << "TOO HIGH!" << "\n";
    }else if(guess < num){
      std::cout << "TOO LOW!" << "\n";
    }else{
      std::cout << "YES! The number was "<< num << "\n Tries: " << tries << "\n";
    }

  } while(guess!=num);

  std::cout << "******** END of NUMBER GUESSING GAME ********" << "\n";

  return 0;
}
