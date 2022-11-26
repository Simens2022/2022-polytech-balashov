#include <iostream>
#include "result.h"

int main(){
    std::cout << "Enter an expression like a$b,\nwhere $ - operation +, -, *, /, ^; a and b - numbers" << std::endl;
    while (true){
        float a = 0;
        float b = 0;
        char sign;
        std::cin >> a >> sign >> b;
        std::cout << "Answer: " << std::endl;
        result(a, sign, b);
        std::cout << "Enter an expression" << std::endl;
    }
}