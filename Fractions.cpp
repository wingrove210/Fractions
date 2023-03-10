#include <iostream>
#include <cmath>
#include "Fractions.h"
using namespace std;


void rational::set(int a1,int b1) {
    a = a1;
    b = b1;
}
void rational::show() {
    cout << a << "\n-----" << "\n" << b << endl;
}


