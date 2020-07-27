#pragma once
#include"Car.h"
#include<list>
#include<algorithm>

class Car_dealership
{
private:
	list<Car>cars;

public:

	void Add_car(const Car& car);
};

