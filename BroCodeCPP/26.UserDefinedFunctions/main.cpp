#include <iostream>
#include <stdio.h>

//function = a set of code wrapped in a wrapper that can be called to do that set of code
//         = the block os reusable code
//

void happyBirthday(std::string name, int age) {
    std::cout << "Happy Birthday to you!\n";
    std::cout << "Happy Birthday to you!\n";
    std::cout << "Happy Birthday dear " << name << "!\n";
    std::cout << "Happy Birthday to you!\n\n";

    std::cout << "You are " << age << " years old!\n\n";
}

int main() 
{
    int age = 29;

    std::string name = "Jeremy";

    happyBirthday(name, age);

    int newage = 28;
    std::string newname = "Thomas";
    happyBirthday(newname, newage);

    return 0;
}
