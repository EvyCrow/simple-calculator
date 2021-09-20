#include <iostream>
using namespace std;


int main()
{
    setlocale(0, "");

    int a, b, oper;


    cout << "Введите первое число >";
    cin >> a;
    cout << "Введите второе число >";
    cin >> b;

    cout << "Введите для выбора операции: \n" << "1 > +\n" << "2 > -\n" << "3 > *\n" << "4 > / \n" << '>';
    cin >> oper;

    switch (oper)
    {
    case 1:
    {
        cout << "Результат >" << a + b << endl;
        return 0;
        system("pause");
    }
    case 2:
    {
        cout << "Результат >" << a - b << endl;
        return 0;
        system("pause");
    }
    case 3:
    {
        cout << "Результат >" << a * b << endl;
        return 0;
        system("pause");
    }
    case 4:
    {
        if (b == 0)
        {
            cout << "Ошибка! Попытка деления на ноль" << endl;
            return 0;
            system("pause");
        }
        else
        {
            cout << "Результат >" << a / b << endl;
            return 0;
            system("pause");
        }
    default:
    {
        cout << "Ошибка! Недопустимые данные" << endl;
        return 0;
        system("pause");
    }
    }
    }
}
