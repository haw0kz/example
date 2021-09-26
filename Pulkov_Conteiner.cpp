#include "Pulkov_Conteiner.h"
#include <iostream>
#include <vector>
#include "Pulkov_Car.h"


void Pulkov_Conteiner::output_in_console()
{
	cout << "Количество объектов:" << vectorOfCar.size() << endl;
	for (int i = 0; i != vectorOfCar.size(); ++i)
	{
		cout << *vectorOfCar[i];
		cout << "-----------------------------------------------------------------------" << endl;

	}
}

void Pulkov_Conteiner::input_by_console()
{
	Pulkov_Car* p = new Pulkov_Car;
	cin >> *p;
	vectorOfCar.push_back(p);
}

void Pulkov_Conteiner::input_from_file()
{
	ifstream in("out.txt", ios::binary);
	if (in.is_open())
	{
		Pulkov_Car* p = new Pulkov_Car;
		while (in >> *p)
		{
			vectorOfCar.push_back(p);
			p = new Pulkov_Car;
		}
	}
	in.close();
}

void Pulkov_Conteiner::output_in_file()
{
	
	ofstream fout;
	fout.open("out.txt", ios::out);
	for (int i = 0; i != vectorOfCar.size(); ++i)
		fout << *vectorOfCar[i];
}

void Pulkov_Conteiner::clear_autopark()
{
	for (vector<Pulkov_Car*>::iterator pObj = vectorOfCar.begin(); pObj != vectorOfCar.end(); ++pObj)
	{
		delete* pObj;
	}
	vectorOfCar.clear();

}
