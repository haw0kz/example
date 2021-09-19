#include "Pulkov_Conteiner.h"
#include <iostream>
#include <vector>
#include "Pulkov_Car.h"


ostream& operator << (ostream& out, const Pulkov_Car& car1)
{
	cout << "Name of car : " << car1.name << endl;
	cout << "Model of car: " << car1.model << endl;
	cout << "Capacity of capacity: " << car1.capacity << endl;
	cout << "Volume of car:  " << car1.volume << endl;
	cout << "Color of car: " << car1.color << endl;
	return out;
}
istream& operator >> (istream& in, Pulkov_Car& car1)
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


ofstream& operator << (ofstream& outf, const Pulkov_Car& car1)
{
	outf << car1.name << endl << car1.model << endl << car1.capacity << endl << car1.volume << endl << car1.color << endl;
	return outf;
}

ifstream& operator >> (ifstream& ifs, Pulkov_Car& car1)
{
	ifs >> car1.name >> car1.model >> car1.capacity >> car1.volume >> car1.color;
	return ifs;
}

void Pulkov_Conteiner::output_in_console()
{
	cout << "Количество объектов:" << v.size() << endl;
	for (int i = 0; i != v.size(); ++i)
	{
		cout << *v[i];
		cout << "-----------------------------------------------------------------------" << endl;

	}
}

void Pulkov_Conteiner::vvod()
{
	Pulkov_Car* p = new Pulkov_Car;
	cin >> *p;
	v.push_back(p);
}

void Pulkov_Conteiner::input_in_file()
{
	ifstream in("out.txt", ios::binary);
	if (in.is_open())
	{
		Pulkov_Car* p = new Pulkov_Car;
		while (in >> *p)
		{
			v.push_back(p);
			p = new Pulkov_Car;
		}
	}
	in.close();
}

void Pulkov_Conteiner::output_in_file()
{
	
	ofstream fout;
	fout.open("out.txt", ios::out);
	for (int i = 0; i != v.size(); ++i)
		fout << *v[i]; 
}

void Pulkov_Conteiner::clear_v()
{
	for (vector<Pulkov_Car*>::iterator pObj = v.begin(); pObj != v.end(); ++pObj)
	{
		delete* pObj;
	}
	v.clear();

}
