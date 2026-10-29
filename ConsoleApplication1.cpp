#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
   
    
    int deg = 41;
    
    int a = 16;
    int b = 9;
    int c = sqrt(pow(a, 2) + pow(b, 2));
    int p = (a + b + c) / 2;
    int s = sqrt(p * (p - a) * (p - b) * (p - c));
  

    /* 1 задание
    float p, n, S;
    cin >> p >> n >> S;
    float xs = S * pow((1 + p / 100), n);
    cout << xs;
    */


    /* 2-3 задание
    float a, b, c, D, X_1, X_2;
    cin >> a >> b >> c;
    D = pow(b, 2) - 4 * a * c;
    cout << ("Дескриминант =", D) << endl;
    if (D < 0)
    {
        cout << "корней нет";
    }
    else
    {
        if (D = 0)
        {
            X_1 = (-b + sqrt(D)) / 2 * a;
            cout << "Единственый корень X", X_1;
        }
        else
        {
            X_1 = (-b + sqrt(D)) / 2 * a;
            X_1 = (-b - sqrt(D)) / 2 * a;
            cout << "x_1 =", X_1, "\nx_2 =", X_2;
        }
    }
    */
    /*
    cout << "Синус радианы" << sin(deg * pi / 180) << "\nКосинус радианы" << cos(deg * pi / 180);
    cout << "p= " << p << "s= " << s;
    cout << 2 * pi * pow(R, 2);
    */

    /*
    cout << "число а в квадрате: " << pow(a, 2) << endl;
    cout << "число а в квадратном корне: " << sqrt(a) << endl;
    cout << "число а в кубическом корне: " << cbrt(a) << endl;
    cout << "модуль int числа а: " << abs(a) << endl;
    cout << "Округление вниз: " << round(b) << endl;
    cout << "Округление вверх: " << floor(a) << endl;
    cout << sin(a) << cos(a) << log10(a);
    */

    const float pi = 3.141592;
    const float g = 8.9;
    float L;
    cin >> L;
    float LG = L / g;
    cout << "маятник: ", 2 * pi * sqrt(LG);
}

