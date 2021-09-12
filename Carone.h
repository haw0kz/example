#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class Carone
{
public:
    string name;
    string model;
    float capacity;
    float volume;
    string color;

    void output_in_console(Carone& car2);
    void vvod(Carone& car2);
    void input_in_file(Carone& car2);
    void output_in_file(Carone& car2);
   
};

