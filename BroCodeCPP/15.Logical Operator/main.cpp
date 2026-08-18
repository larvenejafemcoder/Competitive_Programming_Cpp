#include <iostream>

int main()
{
    // && = checks if two conditions are true
    // || = checks if at least one of the two conditions is true
    // ! = reverses the original argument of its logical state/operand


    int temp;
    bool sunny = true;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    if (temp > 0 && temp < 30){
        std::cout << "The weater kinda sucks today.\n";
        sunny = false;
    }else if(temp > 30 || temp < 45) {
        std::cout << "Alrighty the weather is good.\n";
    }
    else {
        std::cout << "How tf YOU LIVING ? WITH THAT WEATHER!\n";
        sunny = true;
    }

    if (sunny) {
        std::cout << "It is sunny outside too.";
    } else {
        std::cout << "Where tf did the sun go?";
    }

    return 0;
}