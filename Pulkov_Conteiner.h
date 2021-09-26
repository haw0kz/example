#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;
#include "Pulkov_Car.h"

class Pulkov_Conteiner
{
private:
    vector <Pulkov_Car*> vectorOfCar;
public:

    void output_in_console();
    void input_by_console();
    void input_from_file();
    void output_in_file();
    void clear_autopark();

    ~Pulkov_Conteiner()
    {
        cout << "Сработал деструктор!";
        clear_autopark();
    }

};



