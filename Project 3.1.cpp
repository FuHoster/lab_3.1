// Lab_03_1.cpp
// Романчук Артем
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної
// Варіант 12

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x;  
    double y;  
    double A;  
    double B;  

    cout << "x = ";
    cin >> x;

    A = (2 + x) / (x * x) + 1;  

    // вар 1
    if (x < 0)
        B = pow(x, 3) - 2 * pow(x, 4);

    if (x >= 0 && x <= 2)
        B = pow(fabs(x) + exp(x), 3);

    if (x > 2)
        B = 4 * cos(pow(x, 2) - 2);

    y = A + B;

    cout << endl;
    cout << "1) y = " << y << endl;

    // вар 2
    if (x < 0)
        B = pow(x, 3) - 2 * pow(x, 4);
    else if (x >= 0 && x <= 2)
        B = pow(fabs(x) + exp(x), 3);
    else
        B = 4 * cos(pow(x, 2) - 2);

    y = A + B;

    cout << "2) y = " << y << endl;

    cin.get();

    return 0;
}
