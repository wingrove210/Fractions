#include <iostream>
#include <cmath>
#include "Fractions.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b;
    cin >> a >> b;
    rational exemple(a, b);
    if (b!= 0)
       exemple.show();

}
