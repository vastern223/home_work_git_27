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

	void Sort_by_name_();

	void Sort_by_prise_();

	void Car_standard_euro_5();

	void The_total_price_of_cars_under_5_years();

	void reduce_the_price_by_20_for_all_cars_older_than_15();

	void Check_that_all_cars_have_the_correct_year_of_manufacture();
};

