/*
Basic console calculator program that can perform addition, subtraction, multiplication, and division. 
Accepts input from the user or parameters from console and displays the result. 
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include "operations.h"


int main(int argc, char* argv[]) {
    // Check if there are enough arguments
    if (argc < 4) {
        std::cout << "Usage: calculator <operation> <num1> <num2>" << std::endl;
        return 1;
    }

    // argument handling
    std::string operation = argv[1];
    double num1 = std::atof(argv[2]);
    double num2 = std::atof(argv[3]);

    double result;   //can't use switch case effectively, to my dissapointment 
    if (operation == "add") {
        result = addition(num1,num2);
    } else if (operation == "sub") {
        result = subtraction(num1,num2);
    } else if (operation == "mul") {
        result = multiplication(num1,num2);
    } else if (operation == "div") {
        result = division(num1,num2);
    } else if (operation == "mod") {
        result = modulo(num1,num2);
    } else {
        std::cout << "Error: Invalid operation" << std::endl;
        return 1;
    }

    std::cout << "Result: " << result << std::endl;

    return 0;
}