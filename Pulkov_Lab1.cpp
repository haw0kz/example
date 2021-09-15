#include <string>
#include <fstream>
#include <process.h>
#include <iostream>
#include <vector>
#include "Pulkov_Car.h"
#include "Pulkov_Conteiner.h"
#include <windows.h>
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
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int countofmenu;
    Pulkov_Conteiner v;
    Pulkov_Car car1;

    while (true)
    {
        menu();
        cin >> countofmenu;
        switch (countofmenu)
        {
        case 1:
        {
            v.vvod();
            break;
        }
        case 2:
        {
            v.output_in_console();
            system("pause");
            break;
        }
        case 3:
        {
            v.input_in_file();
            break;
        }
        case 4:
        {
            v.output_in_file();
            break;
        }
        case 5:
        {
            v.clear_v();
        
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