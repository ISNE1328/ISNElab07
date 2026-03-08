#include <iostream>
#include "fraction.h"

using namespace std;

int main() {

    Fraction f1(1,2);
    Fraction f2(3,4);

    cout << "f1 = " << f1 << endl;
    cout << "f2 = " << f2 << endl;

    cout << "f1 + f2 = " << f1 + f2 << endl;
    cout << "f1 - f2 = " << f1 - f2 << endl;
    cout << "f1 * f2 = " << f1 * f2 << endl;
    cout << "f1 / f2 = " << f1 / f2 << endl;

    cout << "++f1 = " << ++f1 << endl;
    cout << "f1++ = " << f1++ << endl;

    if (f1 > f2)
        cout << "f1 is greater than f2" << endl;
    else
        cout << "f1 is not greater than f2" << endl;

    return 0;
}