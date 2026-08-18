#include <iostream>

int main() {
    char op; //declare operator
    double num1; //declare firsat number, has to be a float/double so (-) could be accepted
    double num2; //the same but with the 2nd number
    double result;

    std::cout << "********************* CALCULATOR *********************\n";

    std::cout << "Enter either (  +  -  *  /  )";
    std:: cin >> op;

    std::cout << "Enter Num#1:\n";
    std::cin >> num1;

    std::cout << "Enter Num#2:\n";
    std::cin >> num2;
    switch(op){
        case '+':
            result = num1 + num2;
            std::cout << "Result  : " << result << "\n";
            break;
        case '-':
            result = num1 - num2;
            std::cout << "Result  : " << result << "\n";
            break;
        case '*':
            result = num1 * num2;
            std::cout << "Result  : " << result << "\n";
            break;
        case '/':
            result = num1 / num2;
            std::cout << "Result  : " << result << "\n";
            break;
        default :
            std::cout << "That wasnt a valid response!";
            break;
    }


    std::cout << "********************* FINISHED *********************\n";
    return 0;
}