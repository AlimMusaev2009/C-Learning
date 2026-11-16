#include <iostream>
#include <cmath>
#include <Windows.h>
#include <limits>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int i = 0;
    while (i <= 1000) {
        if (i % 2 == 0 && i != 0) {
            cout << i << endl;
        }
        i++;
    }
    i = 0;

    while (i <= 1000) {
        if ((i % 2 == 0 && i != 2) || (i % 3 == 0 && i != 3) || (i % 5 == 0 && i != 5)) {
            cout << i << endl;
        }
        i++;
    }
    i = 0;

    string str;
    cout << "Введите слово: ";
    cin >> str;
    int n = str.length();
    bool as;
    while (i <= n - 1) {
        if ((str[i] == 'a' || str[i] == 'A') || (str[i] == 'а' || str[i] == 'А')) {
            i = n;
            as = TRUE;
            break;
        }
        else {
            as = FALSE;
        }
        i++;
    }
    string otv = (as) ? "В вашем слове есть буква `A`" : "В вашем слове нет буквы `A`";
    cout << otv;
}

