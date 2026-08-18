#include <iostream>

void Normally(){
    // int grade =  75;
    int grade;
    std::cout << "Enter your grade\n";
    std::cin >> grade;
    if (grade >= 60){
        std::cout << "You Passed!";
    }
    else{
        std::cout << "You Failed!";
    }

}


void Ternary(){
    // int grade =  75;
    int grade;
    std::cout << "Enter your grade\n";
    std::cin >> grade;
    grade >= 60 ? std::cout << "You Passed!" : std::cout << "You Failed!";

}

void OddNum(){
    int number;
    std::cout << "What Number would you wanna check for odd?\n";
    std::cin >> number;
    number % 2 == 1 ? std::cout << "Odd number\n" : std::cout << "Even Number\n"; 
}

void Hungry(){
    bool hungry = true;
    hungry? std::cout << "You are Hunrgy!\n" : std::cout << "You are Full!\n";
}


int main () {
    //ternary operator ?: replacement for if/else statement
    //condition ? argument1 : argument2
    int input;
    std::cout << "What you want to choose? 1.Normally ifElse or 2.TernaryOperator or 3.OddNumberChecker\n";
    std::cin >> input;
    if( input == 1 ){
        Normally();
    }else if( input == 3){
        OddNum();
    }
    else{
        Ternary();
    }

    Hungry();

    return 0;
}