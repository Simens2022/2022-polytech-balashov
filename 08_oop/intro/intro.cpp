#include "String.h"
#include <iostream>


using namespace std;


int main() {
	String frst = "String"; // первая строка
	String scnd = " Length:"; // вторая строка
	String thrd = frst + scnd; // их сумма
	cout << thrd << ' ' << thrd.get_length() << endl;
	String fourth = "Length of"; // другой пример
	String last = fourth + " String:"; // сумма строк
	cout << last << ' ' << last.get_length() << endl;

	return 0;
}