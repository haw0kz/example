#include <string>
#include <fstream>
#include <process.h>
#include <iostream>
#include <vector>
#include "Car.h"
#include "Carone.h"
using namespace std;

void menu()
{
    system("cls");
    cout << "1.Добавить автомобиль в автопарк: " << endl;
    cout << "2.Вывести автопарк: " << endl;
    cout << "3.Считать данные из файла:" << endl;
    cout << "4.Вывод данных в файл:" << endl;
    cout << "5.Очистить вектор из объектов:" << endl;
    cout << "6.Выход из программы:" << endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int countofmenu;
    vector<Car> v;
    Car car1;
    Carone car2;

    while (true)
    {
        menu();
        cin >> countofmenu;
        switch (countofmenu)
        {
        case 1:
        {
            v.push_back(car1);
            break;
        }
        case 2:
        {
            car1.output_in_console();
            system("pause");
            break;
        }
        case 3:
        {
            car1.input_in_file();
            break;
        }
        case 4:
        {
            car1.output_in_file();
            break;
        }
        case 5:
        {
            car1.clear_v();
            break;
        }
        case 6:
        {
            return 0;
        }
        default: 
            cout << "Неккоректный ввод" << endl;
        }
    }

}