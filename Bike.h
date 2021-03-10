#pragma once
#include "Vehicle.h"
#include <iostream>
using namespace std;

class Bike:public Vehicle
{
private:
	double height;
	bool SelfStart;
	bool discBrake;
	static int NumberOfBikes;
public:
	Bike(double = 0, bool = false, bool = false,char* = nullptr, char* = nullptr, int = 0);
	Bike(const Bike&);
	~Bike();
	istream& input(istream&);
	ostream& output(ostream&);
	Bike& operator=(Bike&);
	void Set_Height(double);
	void Set_SelfStart(bool);
	void Set_DiscBreak(bool);
	double Get_Height();
	bool Get_SelfStart();
	bool Get_DiscBrake();
	int Get_NumberOfBikes();
	void checkType();
	void Display()const;
};

