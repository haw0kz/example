#include "Carone.h"

void Carone::output_in_console(Carone& car2)
{
	cout << "Name of car : " << car2.name << endl;
	cout << "Model of car: " << car2.model << endl;
	cout << "Capacity of capacity: " << car2.capacity << endl;
	cout << "Volume of car:  " << car2.volume << endl;
	cout << "Color of car: " << car2.color << endl;
}

void Carone::vvod(Carone& car2)
{
	cout << "Input name : " << endl;
	cin >> car2.name;
	cout << "Input model: " << endl;
	cin >> car2.model;
	cout << "Input capacity: " << endl;
	cin >> car2.capacity;
	cout << "Input volume: " << endl;
	cin >> car2.volume;
	cout << "Input color: " << endl;
	cin >> car2.color;
}

void Carone::input_in_file(Carone& car2)
{
	ifstream in("text.txt");
	if (in.is_open())
	{
		in >> car2.name >> car2.model >> car2.capacity >> car2.volume >> car2.color;
	}
	in.close();
}

void Carone::output_in_file(Carone& car2)
{
	ofstream outf("text.txt", ios::out);
	outf << car2.name << endl;
	outf << car2.model << endl;
	outf << car2.capacity << endl;
	outf << car2.volume << endl;
	outf << car2.color << endl;
	outf.close();
}


