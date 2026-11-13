#include <iostream>
#include <cmath>
#include <Windows.h>
#include <limits>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int UF;
    cout << "Выберите задание (1, 2, 3): " << endl;
    cin >> UF;
    switch(UF) {

        case 1:
            int g, h;
            char o;
            cin >> g, o, h;
            switch (o) {
                case '/':
                    cout << g << "/" << h << "=" << g - h;
                    break;
                case '*' :
                    cout << g << "*" << h << "=" << g - h;
                    break;
                case '+':
                    cout << g << "+" << h << "=" << g - h;
                    break;
                case '-':
                    cout << g << "-" << h << "=" << g - h;
               
            }
            break;

        case 2:
            int ch;
            cout << "Площадь какой фигуры вы хотите узнать: \n  1) Квадрат  \n  2) Треугольник  \n  3) Круг  ";
            cin >> ch;
            switch (ch) {
                case 1:
                    cout << "Введите длину сторны квадрата: ";
                    int a;
                    cin >> a;
                    cout << "Площадь куба равна: " << pow(a, 2);
                    break;
                case 2:
                    int a, h;
                    cout << "Введите ширину основания треугольника: ";
                    cin >> a;
                    cout << "Введите высоту треугольника: ";
                    cin >> h;
                    cout << "Площадь треугольника равна: " << h*a/2;
                    break;
                case 3:
                    int R;
                    double const pi = 3.1415926;
                    cout << "Введите радиус круга: ";
                    cin >> R;
                    cout << "Площадь круга равна: " << pi*pow(R,2);
            }
            break;

        case 3:
            bool running = TRUE;
            while (running){
                int use, balance;
                cout << "Выберите действие:\n  1) Внести\n 2) Снять\n 3) Просмотр информации\n 4) Зайти в магазин\n 5) Закрть прграмму" << endl;
                cin >> use;
                switch (use) {
                    case 1:
                        int in;
                        cout << "Введите сумму для вноса на счет: " << endl;
                        cin >> in;
                        balance += in;
                        break;
                    case 2:
                        int out;
                        cout << "Введите сумму для снятия средств со счета: " << endl;
                        cin >> out;
                        if (balance >= out) {
                            cout << "Вы успешно сняли " << out << "рублей с вашего баланса" << endl;
                            balance -= out;
                        }
                        else {
                            cout << "Недостаточно средств на балансе" << endl;
                        }
                        break;
                    case 3:
                        cout << "Ваш баланс составляет: " << balance << endl;
                        break;
                    case 4:
                        int mag;
                        cout << "Вы в магазине\n Выберите что будете покупать: \n 1) Хлеб (42,99)\n 2) Два хлеба (84,99)\n 3) Три хлебва (126,99)\n 4) Четыре хлеба (168,99)\n 5) Багет (67,68)\n 6) Выйти из магазина" << endl;
                        cin >> mag;
                        switch (mag) {
                            case 1:
                                if (balance >= 42.99) {
                                    cout << "Спасибо за покупку хлеба" << endl;
                                    balance -= 42.99;
                                }
                                else {
                                    cout << "Недостаточно средств" << endl;
                                }
                                break;
                            case 2:
                                if (balance >= 84.99) {
                                    cout << "Спасибо за покупку двух хлебов" << endl;
                                    balance -= 84.99;
                                }
                                else {
                                    cout << "Недостаточно средств" << endl;
                                }
                                break;
                            case 3:
                                if (balance >= 126.99) {
                                    cout << "Спасибо за покупку трех хлебов" << endl;
                                    balance -= 126.99;
                                }
                                else {
                                    cout << "Недостаточно средств" << endl;
                                }
                                break;
                            case 4:
                                if (balance >= 168.99) {
                                    cout << "Спасибо за покупку трех хлебов" << endl;
                                    balance -= 168.99;
                                }
                                else {
                                    cout << "Недостаточно средств" << endl;
                                }
                                break;
                            case 5:
                                if (balance >= 67.68) {
                                    cout << "Спасибо за покупку трех хлебов" << endl;
                                    balance -= 67.68;
                                }
                                else {
                                    cout << "Недостаточно средств" << endl;
                                }
                                break;


                        }
                    case 5:
                        running = FALSE;
                    
                }
            }
        
        
    }
}

