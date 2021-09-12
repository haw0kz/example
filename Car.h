#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class Car
{
public:
    vector <Car> v;
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
    
    friend std::ostream& operator << (std::ostream& out, const Car& car1);
    friend std::istream& operator >> (std::istream& in, Car& car1);
    friend std::ofstream& operator << (std::ofstream& outf, const Car& car1);
    friend std::ifstream& operator >> (std::ifstream& ifs, Car& car1);    
};



