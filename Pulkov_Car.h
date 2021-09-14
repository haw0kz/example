#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class Pulkov_Car
{
public:
    
    vector <Pulkov_Car> v;
    string name;
    string model;
    double capacity;
    double volume;
    string color;
   
    void output_in_console();
    void vvod();
    void input_in_file();
    void output_in_file();
    void clear_v();
    
    friend std::ostream& operator << (std::ostream& out, const Pulkov_Car& car1);
    friend std::istream& operator >> (std::istream& in, Pulkov_Car& car1);
    friend std::ofstream& operator << (std::ofstream& outf, const Pulkov_Car& car1);
    friend std::ifstream& operator >> (std::ifstream& ifs, Pulkov_Car& car1);
};



