#include <iostream>

void Date()
{
    int month;
    std::cout << "Enter the month (1-12): \n";
    std::cin >> month;

    switch(month){
        case 1:
            std::cout << "It is January.\n";
            break;
        case 2:
            std::cout << "It is February.\n";
            break;
        case 3:
            std::cout << "It is March.\n";
            break;
        case 4:
            std::cout << "It is April.\n";
            break;
        case 5:
            std::cout << "It is May.\n";
            break;
        case 6:
            std::cout << "It is June.\n";
            break;
        case 7:
            std::cout << "It is July.\n";
            break;
        case 8:
            std::cout << "It is August.\n";
            break;
        case 9:
            std::cout << "It is September.\n";
            break;
        case 10:
            std::cout << "It is October.\n";
            break;
        case 11:
            std::cout << "It is November.\n";
            break;
        case 12:
            std::cout << "It is December.\n";
            break;
        default:
            std::cout << "Invalid selection.\n";
    }
}

int main()
{
    Date();
    char grade;

    std::cout << "What letter grade?: \n";
    std::cin >> grade;

    switch(toupper(grade)){
        case 'A':
            std::cout << "You did great!";
            break;
        case 'B':
            std::cout << "You did alright!";
            break;
        case 'C':
            std::cout << "You could do better!";
            break;
        case 'D':
            std::cout << "What?!";
            break;
        case 'F':
            std::cout << "Stop!";
            break;
        default:
            std::cout << "Enter grade A-F.";
    }
}