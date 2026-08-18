#include <iostream>
#include <iomanip>
#include <limits>


void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{

  double balance = 0;
  int choice = 0;

  while( choice!=4 )
  {
    std::cout << "****************************\n";
    std::cout << "Enter Your Choice: \n";
    std::cout << "****************************\n";
    std::cout << "1.Show Balance\n";
    std::cout << "2.Deposit Money\n";
    std::cout << "3.Withdraw Money\n";
    std::cout << "4.Exit\n";

    std::cin >> choice;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    switch(choice){
      case 1: showBalance(balance);
              break;
      case 2: balance += deposit();
              showBalance(balance);
              break;
      case 3: balance -= withdraw(balance);
              showBalance(balance);
              break;
      case 4: std::cout << "Thanks for using our service" << "\n";
              break;
      default: std::cout << "Invalid input\n";
    }
  } 

  return 0;
}

void showBalance(double balance){
  std::cout << "Your balance is: $"<< std::setprecision(2) << std::fixed << balance << "\n";
}
double deposit(){
  double amount = 0;

  std::cout << "Enter amount to deposit: " << "\n ";

  std::cin >> amount;
  if(amount > 0){
    return amount;
  }else{
    std::cout << "Thats not the standard amount\n";
    return amount = 0;
  }
  return amount;
}
double withdraw(double balance){
  double amount = 0;

  std::cout << "Enter amount to be withdrawn\n";
  std::cin>>amount;

  if(amount > balance){
    std::cout << "Insurficient funds\n";
    return 0;
  }else if(amount < 0){
    std::cout << "Thats not a valid amount\n";
    return 0;
  }
  return amount;
}

