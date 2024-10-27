// Lab_03_3.cpp
// Котович Максим Михайлович
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 20

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;
    double R;
    double y;

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;

    if (x <= 0)
        y = 1;
    else
        if (0 < x && x <= R)
            y = -sqrt(R * R - x * x);
        else
            if (R < x && x <= 2 * R)
                y = sqrt(R * R - (x - R) * (x - R));
            else
                y = -(x - 2 * R) / (6 - 2 * R) - 1;

    cout << endl;
    cout << "y = " << y << endl;

    cin.get();
    return 0;
}
