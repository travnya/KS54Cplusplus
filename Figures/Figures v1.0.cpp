﻿#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");

    short figure, lenght, type, size1, size2;
    char symbol;
    char empty_space = ' ';
    bool isEmpty;

    cout << "[+] 'Геометрические фигуры'\n";
    cout << "[1] Линия\n";
    cout << "[2] Квадрат\n";
    cout << "[3] Прямоугольник\n";
    cout << "[4] Треугольник\n\n";

    cout << "[+] Выберите фигуру: ";
    cin >> figure;

    system("cls");

    switch (figure)
    {
    case 1:
        cout << "[+] Фигура: Линия\n";

        cout << "\n[+] Тип линии\n";

        cout << "\n[1] Горизонтальная";
        cout << "\n[2] Вертикальная\n";
        cout << "\n[+] Выберите тип: ";
        cin >> type;

        cout << "\n[+]Выберите длину линии: ";
        cin >> lenght;

        cout << "\n[+]Выберите текстуру линии: ";
        cin >> symbol;

        if (type == 1)
        {
            cout << "[+] Результат: ";
            while (lenght > 0)
            {
                cout << symbol;
                lenght -= 1;
            }
            cout << endl;
        }
        else
        {
            cout << "[+] Результат: \n";
            while (lenght > 0)
            {
                cout << symbol << endl;
                lenght -= 1;
            }
        }
        break;
    case 2:
        cout << "\n[+] Квадрат должен быть пустым? (1 - да, 0 - нет) ";
        cin >> isEmpty;
        cout << "[+] Выберите размер стороны квадрата: ";
        cin >> size1;
        cout << "\n[+] Выберите текстуру квадрата: ";
        cin >> symbol;
        if (isEmpty == 0)
        {
            cout << "[+] Результат: \n";
            for (int i = 0; i < size1; i++)
            {
                for (int j = 0; j < size1; j++)
                {
                    cout << symbol << " ";
                }
                cout << "\n";
            }
        }
        else
        {
            cout << "[+] Результат: \n";
            for (int i = 0; i < size1; i++)
            {
                for (int j = 0; j < size1; j++)
                {
                    if (i == 0 || i == size1-1)
                    {
                        cout << symbol << " ";
                    }
                    else
                    {
                        if (j == 0 || j == size1-1)
                        {
                            cout << symbol << " ";
                        }
                        else
                        {
                            cout << "  ";
                        }
                    }
                }
                cout << endl;
            }
        }

        break;

    case 3:

        cout << "\n[+] Прямоугольник должен быть пустым? (1 - да, 0 - нет) ";
        cin >> isEmpty;
        cout << "[+] Выберите размер первой стороны прямоугольника: ";
        cin >> size1;
        cout << "[+] Выберите размер второй стороны прямоугольника: ";
        cin >> size2;
        cout << "\n[+] Выберите текстуру прямоугольника: ";
        cin >> symbol;

        if (isEmpty == 0)
        {
            cout << "[+] Результат: \n";
            for (int i = 0; i < size2; i++)
            {
                for (int j = 0; j < size1; j++)
                {
                    cout << symbol << " ";
                }
                cout << "\n";
            }
        }
        else
        {
            cout << "[+] Результат: \n";
            for (int i = 0; i < size2; i++)
            {
                for (int j = 0; j < size1; j++)
                {
                    if (i == 0 || i == size2 - 1)
                    {
                        cout << symbol << " ";
                    }
                    else
                    {
                        if (j == 0 || j == size1 - 1)
                        {
                            cout << symbol << " ";
                        }
                        else
                        {
                            cout << "  ";
                        }
                    }
                }
                cout << endl;
            }
        }
        break;
/*      case 4:
        cout << "\n[+] Треугольник должен быть пустым? (1 - да, 0 - нет) ";
        cin >> isEmpty;
        cout << "[+] Выберите высоту треугольника: ";
        cin >> size1;
        cout << "[+] Выберите основание треугольника: ";
        cin >> size2;
        if (size2 % 2 != 0)
        {
            cout << "\n[+] Выберите текстуру треугольника: ";
            cin >> symbol;

            cout << "[+] Результат: \n";
            for (int i = 0; i < size1; i++)
            {
                for (int j = 0; j < size2; j++)
                {
                    if (i == ceil(size2/2))
                    {
                        if (j >= ceil(size2 / 2) - i && j <= ceil(size2 / 2) + i)
                        {
                            cout << symbol << " ";
                        }
                        else
                        {
                            cout << "  ";
                        }
                    }
                    cout << endl;
                }
            }
        }
        else 
        {
            cout << "Основание треугольника должно быть нечётной величиной!\n";
        }
        break;              */
    default:
        cout << "Такой фигуры пока не существует :с\n";
    }
    system("pause");
    return 0;
}
