#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class Pulkov_Carone
{
public:
    string name;
    string model;
    float capacity;
    float volume;
    string color;

    void output_in_console(Pulkov_Carone& car2);
    void vvod(Pulkov_Carone& car2);
    void input_in_file(Pulkov_Carone& car2);
    void output_in_file(Pulkov_Carone& car2);
   
};

