#include "Car.h"
#include <vector>

ostream& operator << (ostream& out, const Car& car1)
{

	cout << "Name of car : " << car1.name << endl;
	cout << "Model of car: " << car1.model << endl;
	cout << "Capacity of capacity: " << car1.capacity << endl;
	cout << "Volume of car:  " << car1.volume << endl;
	cout << "Color of car: " << car1.color << endl;
	return out;
}
istream& operator >> (istream& in, Car& car1)
{
	cout << "Input name of car: " << endl;
	cin >> car1.name;
	cout << "Input model of car: " << endl;
	cin >> car1.model;
	cout << "Input capacity of car: " << endl;
	cin >> car1.capacity;
	cout << "Input volume of car: " << endl;
	cin >> car1.volume;
	cout << "Input color of car: " << endl;
	cin >> car1.color;
	return in;
}


ofstream& operator << (ofstream& outf, const Car& car1)
{
	outf  << car1.name << endl << car1.model << endl << car1.capacity << endl << car1.volume << endl << car1.color;
	return outf;
}

ifstream& operator >> (ifstream& ifs, Car& car1)
{
	ifs >> car1.name >> car1.model >> car1.capacity >> car1.volume >> car1.color;
	return ifs;
}

void Car::output_in_console()
{
	
	cout << "Количество объектов:" << v.size() << endl;
	for (auto iter = v.begin(); iter != v.end(); ++iter)
	{
		cout << *iter;
		cout << "-----------------------------------------------------------------------" << endl;

	}
}

void Car::vvod()
{
	Car car1;
	cin >> car1;
	v.push_back(car1);
}

void Car::input_in_file()
{
	
	ifstream in("out.txt");
	if (in.is_open())
	{
		Car car1;
		while (in >> car1)
		{
			v.push_back(car1);
		}
	}
	in.close();
}

void Car::output_in_file()
{
	
	ofstream fout;
	fout.open("out.txt", ios::out);
	for (auto iter = v.begin(); iter != v.end(); ++iter)
		fout << *iter; 
}

void Car::clear_v()
{
	while (v.size() != NULL)
	{
		v.clear();
	}
}
