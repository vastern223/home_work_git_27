#pragma once
#include"Car.h"
#include<list>
#include<algorithm>

class Sort_by_name
{
public:

	bool operator()(Car& car1, Car& car2)
	{
		return car1.Get_name_car() < car2.Get_name_car();
	}

};

class Sort_by_prise
{
public:

	bool operator()(Car& car1, Car& car2)
	{
		return car1.Get_price() < car2.Get_price();
	}

};



class Car_dealership
{
private:
	list<Car>cars;

public:

	void Add_car(const Car& car);

	void Delete_all_cars_manufactured_before_2000();

	void Show_all_cars();

	void Sort_by_name_();

	void Sort_by_prise_();

	void Show_by_name_car(string name);

	void Show_by_year(int year);

	void Show_by_price(int price);

	void Car_standard_euro_5();

	void The_total_price_of_cars_under_5_years();

	void Check_that_all_cars_have_the_correct_year_of_manufacture();

	void reduce_the_price_by_20_for_all_cars_older_than_15();

	void check_if_there_is_a_car_with_a_price_of_more_than_100000();
};

