#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class Pulkov_Car
{
public:
    string name;
    string model;
    float capacity;
    float volume;
    string color;

    friend std::ostream& operator << (std::ostream& out, const Pulkov_Car& car1);
    friend std::istream& operator >> (std::istream& in, Pulkov_Car& car1);
    friend std::ofstream& operator << (std::ofstream& outf, const Pulkov_Car& car1);
    friend std::ifstream& operator >> (std::ifstream& ifs, Pulkov_Car& car1);



};

