#pragma once
#include <cmath>
#include <iostream>
using namespace std;

class rational {
private:
    int a, b;
public:
    rational(int a1, int b1) {
        a = a1;
        b = b1;
        if (a > b && b != 0) {
            a = a / b;
            a = round(a);
        }
        else {
            if (b == 0) {
                cout << "Нуля в знаменателе быть не может" << endl;
            }
            else
            {
                if (b > a) {
                    if (b % a == 0) {
                        b /= a;
                        a = 1;
                    }

                }
            }

        }
    }
    void set(int a1, int b1);
    void show();

};