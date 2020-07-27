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

	void Delete_all_cars_manufactured_before_2000();

	void Show_all_cars();
};

