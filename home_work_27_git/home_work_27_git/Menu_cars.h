#pragma once
#include"Car_dealership.h"

class Menu_cars
{
private:
	Car_dealership cl;

	void Add_car();

	void Delete_all_cars_manufactured_before_2000();

	void Show_all_cars();

	void Show_by_name_car();

	void Show_by_year();

	void Show_by_price();
};

