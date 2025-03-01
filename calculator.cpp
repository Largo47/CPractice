/*
Basic console calculator program that can perform addition, subtraction, multiplication, and division. 
Accepts input from the user or parameters from console and displays the result. 

*/


#include <iostream>
#include <string>
#include <cstdlib>

int main(int argc, char* argv[]) {
    // Check if there are enough arguments
    if (argc < 4) {
        std::cout << "Usage: calculator <operation> <num1> <num2>" << std::endl;
        return 1;
    }

    // Get the operation and numbers from the arguments
    std::string operation = argv[1];
    double num1 = std::atof(argv[2]);
    double num2 = std::atof(argv[3]);

    // Perform the operation
    double result;
    if (operation == "add") {
        result = num1 + num2;
    } else if (operation == "sub") {
        result = num1 - num2;
    } else if (operation == "mul") {
        result = num1 * num2;
    } else if (operation == "div") {
        if (num2 == 0) {
            std::cout << "Error: Division by zero" << std::endl;
            return 1;
        }
        result = num1 / num2;
    } else if (operation == "mod") {
        if (num2 == 0) {
            std::cout << "Error: Division by zero" << std::endl;
            return 1;
        }
        result = static_cast<int>(num1) % static_cast<int>(num1);
    } else {
        std::cout << "Error: Invalid operation" << std::endl;
        return 1;
    }

    // Display the result
    std::cout << "Result: " << result << std::endl;

    return 0;
}