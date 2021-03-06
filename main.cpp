#include <iostream>
#include "Vehicle.h"
#include "Bike.h"
#include "Car.h"
#include "Truck.h"
#include "BilalMotors.h"
using namespace std;

int Bike::NumberOfBikes;
int Car::NumberOfCars;
int Truck::NumberOfTrucks;
ostream& operator<<(ostream& Cout, Truck& obj)
{
	return obj.output(Cout);
}
ostream& operator<<(ostream& Cout, Car& obj)
{
	return obj.output(Cout);
}

ostream& operator<<(ostream& Cout, Bike& obj)
{
	return obj.output(Cout);
}
void Show_Vehicles(const BilalMotors& obj) {
	cout << "					Number Of Vehicles :	" << obj.Get_Size() << endl;
	for (int i = 0; i < obj.Get_Size(); i++) {
		obj[i]->Display();
	}
}

void Menu()
{
	cout << endl;
	cout << " ***** Bilal Motors ***** " << endl;
	cout << "Press S	Show Vehicles List(Breif) " << endl;
	cout << "Press E	Create a Data File (Output File) " << endl;
	cout << "Press A	Add new vehicle" << endl;
	cout << "Press F	Find Vehicle by type" << endl;
	cout << "Press Q	Quit Program" << endl;
	cout << endl;
}

int main()
{
	BilalMotors obj;
	char ch;
	while (1) {
		Menu();
		cout << "Enter: ";
		cin >> ch;
		cout << endl;
		if (ch == 's' || ch == 'S') {
			Show_Vehicles(obj);
		}
		if (ch == 'e' || ch == 'E') {
			char* filename = new char[20];
			cout << "Enter File Name: ";
			cin >> filename;
			cout << endl;
			if (obj.Save_Data(filename)) {
				cout << "File Created Successfully" << endl;
			}
			else {
				cout << "File Creation Failure" << endl;
			}
		}
		if (ch == 'A' || ch == 'a') {
			obj.Add_Vehicle();
		}
		if (ch == 'f' || ch == 'F') {
			char* type = new char[20];
			cout << "Enter vehicle Type:";
			cin >> type;
			cout << endl;
			obj.Search_Vehicle(type);
		}
		if (ch == 'q' || ch == 'Q') {
			break;
		}
	}
	system("pause");
	return 0;
}

