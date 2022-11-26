#include <iostream>
#include "search.h"

int main(){
    int mas[] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20}; 
    const int arrsize = sizeof(mas) / sizeof(mas[0]);
    std::cout << "Item ID: " << search(mas, 0, arrsize, 15) << std::endl;
    return 0;
}