#include <iostream>

void result(float a, char c, float b){
    switch (c){
        case '+':
            std::cout << a + b << std::endl;
            break;
        case '-':
            std::cout << a - b << std::endl;
            break;
        case '*':
            std::cout << a * b << std::endl;
            break;
        case '/':
            std::cout << a / b << std::endl;
            break;
        case '^':
            std::cout << pow(a, b) << std::endl;
            break;
    }
}