#include <iostream>
#include <cstring>
#include "String.h"


String::String(const char* input) {
    in = (char*)malloc(strlen(input)); // выделяем объём памяти, необходимый для строки
    if (in) strcpy(in, input); // проверяем, чтобы эта память != 0 (компилятор ругался) и копируем строку в in
}


unsigned int String::get_length() { // Метод для нахождения длины строки
    if (!in) return 0; // Если строка пустая, то возвращаем 0
    const char* end = in;
    for (; *end != '\0'; end++);

    return end - in;
}


const char* String::c_str() { return in; } //возвращает значение in


String String::operator+(String rv) { // оператор +, для конкатенации строк
    auto dest = (char*)malloc(this->get_length());
    if (in) strcpy(dest, in);
    if (dest + rv.get_length()) strcpy(dest + rv.get_length(), rv.c_str());
    const char* res = dest; // res - первая строки
    const char* res2 = dest + rv.get_length(); // res2 - вторая строка
    int len = 0;
    if (res2 && res) len = strlen(res2) + strlen(res); // общая длина двух строк
    char* resf = new char[len]; // динамический массив размера len
    for (int i = 0; i < strlen(res) + 1; i++) { // заполняем часть массива первой строкой
        if (res[i] != '\0') resf[i] = res[i];
        else break;
    }
    for (int i = 0; i < len; i++) { // заполняем часть массива второй строкой
        if (res2[i] != '\0') resf[i + strlen(res)] = res2[i];
        else break;
    }
    resf[len] = '\0'; // очищаем лишние значения
    const char* resff = resf;

    return String(resff);
}


std::ostream& operator<<(std::ostream& out, String& str) {
    out << str.c_str();

    return out;
}


String::~String() = default; //дестркутор класса
