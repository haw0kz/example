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
    vector <Pulkov_Car*> v;
public:

    void output_in_console();
    void vvod();
    void input_in_file();
    void output_in_file();
    void clear_v();
    
    friend std::ostream& operator << (std::ostream& out, const Pulkov_Conteiner& car1);
    friend std::istream& operator >> (std::istream& in, Pulkov_Conteiner& car1);
    friend std::ofstream& operator << (std::ofstream& outf, const Pulkov_Conteiner& car1);
    friend std::ifstream& operator >> (std::ifstream& ifs, Pulkov_Conteiner& car1);
};



