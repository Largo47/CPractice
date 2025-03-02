#include <iostream>
#include "operations.h"

double addition(double num1, double num2){
    return num1+num2;
}  
double subtraction(double num1, double num2){
    return num1-num2;   
}

double multiplication(double num1, double num2){
    return num1*num2;   
}

double division(double num1, double num2){
    if (num2 == 0) {
        std::cout << "Error: Division by zero" << std::endl;
        return 0;
    }
    return num1/num2;
}

int modulo(double num1, double num2){
    if (num2 == 0) {
        std::cout << "Error: Division by zero" << std::endl;
        return 0;
    }
    return static_cast<int>(num1) % static_cast<int>(num2);
}
    