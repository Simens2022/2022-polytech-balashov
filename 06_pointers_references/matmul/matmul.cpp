#include "matmul.h"
#include "mateq.h"
#include <cassert>


using namespace std;


// mateq 
/* 
int main() { 
    while (true) {
        int r_a, c_a, r_b, c_b;
        cout << "Enter the number of columns and rows for the first mat" << endl;
        cin >> r_a >> c_a;
        int** a = arr_create(r_a, c_a);
        cout << "Fill the first mat:" << endl;
        fill_array(a, r_a, c_a);
        cout << "Enter the number of columns and rows for the second mat" << endl;
        cin >> r_b >> c_b;
        int** b = arr_create(r_b, c_b);
        cout << "Fill the second mat:" << endl;
        fill_array(b, r_b, c_b);
        bool f = mateq(a, r_a, c_a, b, r_b, c_b);
        if (!f) cout << "Mat are not equal" << endl << endl;
        else cout << "Mat are equal" << endl << endl;
        delete_arr(a, r_a);
        delete_arr(b, r_b);

    }

    return 0;
}
*/
// matmul
int main() { 
    while (true) {
        int r_a, c_a, r_b, c_b;
        cout << "Enter the number of columns and rows for the first mat" << endl;
        cin >> r_a >> c_a;
        int** a = arr_create(r_a, c_a);
        cout << "Fill the first mat:" << endl;
        fill_array(a, r_a, c_a);
        cout << "Enter the number of columns and rows for the second mat" << endl;
        cin >> r_b >> c_b;
        int** b = arr_create(r_b, c_b);
        cout << "Fill the second mat:" << endl;
        fill_array(b, r_b, c_b);
        int r_c = r_a, c_c = c_b;
        int** c = arr_create(r_c, c_c);
        matmul(a, r_a, c_a, b, r_b, c_b, c);
        print_array(c, c_a, c_b); // assert tests are not possible because all functions have void type
        delete_arr(a, r_a);
        delete_arr(b, r_b);
        delete_arr(c, r_c);
    }

    return 0;
}

