#include "Car_dealership.h"


void Car_dealership::Add_car(const Car& car)
{
	cars.push_back(car);
}

void Car_dealership::Delete_all_cars_manufactured_before_2000()
{
	cars.erase(remove_if(cars.begin(), cars.end(), [](auto& element) {return element.Get_name_year_of_issue() < 2000; }), cars.end());
}

void Car_dealership::Show_all_cars()
{
	if (!cars.empty())
	{
		cout << "Information about all cars\n\n ";
		for (auto iter = cars.begin(); iter != cars.end(); iter++)
		{
			(*iter).Show();
			cout << endl;
		}
	}
}

void Car_dealership::Sort_by_name_()
{
	cars.sort(Sort_by_name());
}
void Car_dealership::Sort_by_prise_()
{
	cars.sort(Sort_by_prise());
}


void Car_dealership::Show_by_name_car(string name)
{
	for (auto iter = cars.begin(); iter != cars.end(); iter++)
	{
		if ((*iter).Get_name_car() == name)
		{
			(*iter).Show();
			break;
		}

	}
}

void Car_dealership::Show_by_year(int year)
{
	for (auto iter = cars.begin(); iter != cars.end(); iter++)
	{
		if ((*iter).Get_name_year_of_issue() == year)
		{
			(*iter).Show();

		}

	}
}

void Car_dealership::Show_by_price(int price)
{
	for (auto iter = cars.begin(); iter != cars.end(); iter++)
	{
		if ((*iter).Get_price() == price)
		{
			(*iter).Show();

		}
	}
}

void Car_dealership::Car_standard_euro_5()//נואכüםמ ה³ÿעü ÷גנמ 5 ןמקאג ג 2009 נמצ³ (א םו ג 2008)
{
	int counter_euro_5 = 0;
	for (auto iter = cars.begin(); iter != cars.end(); iter++)
	{
		if ((*iter).Get_name_year_of_issue() >= 2009)
		{
			counter_euro_5++;
		}
	}

	cout << "Cars euro 5 :" << counter_euro_5 << endl;
}



void Car_dealership::The_total_price_of_cars_under_5_years()
{
	int total_price = 0;

	for (auto iter = cars.begin(); iter != cars.end(); iter++)
	{
		if ((*iter).Get_name_year_of_issue() >= 2015)
		{
			total_price += (*iter).Get_price();
		}
	}

	cout << "Total price of cars under 5 years:" << total_price << endl;
}

void Car_dealership::Check_that_all_cars_have_the_correct_year_of_manufacture()
{
	if (all_of(cars.begin(), cars.end(), [](auto& element) {return element.Get_name_year_of_issue() >= 1900 && element.Get_name_year_of_issue() <= 2020; }))
	{
		cout << "All cars have the correct year of manufacture" << endl;
	}
	else
	{
		cout << "not all cars have the correct year of manufacture" << endl;
	}
}


void Car_dealership::reduce_the_price_by_20_for_all_cars_older_than_15()
{
	for (auto iter = cars.begin(); iter != cars.end(); iter++)
	{
		if ((*iter).Get_name_year_of_issue() <= 2005)
		{

			(*iter).Set_price((*iter).Get_price() - (*iter).Get_price() / 5);
		}
	}
}

void  Car_dealership::check_if_there_is_a_car_with_a_price_of_more_than_100000()
{

	if (any_of(cars.begin(), cars.end(), [](auto& element) {return element.Get_price() > 100000; }))
	{
		cout << "there is a car with a price of more than 100,000" << endl;
	}
	else
	{
		cout << "not there is a car with a price of more than 100,000" << endl;

	}

}

void  Car_dealership::Check_for_missing_cars_with_a_smaller_volume()
{
	if (none_of(cars.begin(), cars.end(), [](auto& element) {return element.Get_engine_capacity() < 1.0; }))
	{
		cout << "there are no cars with a volume less than 1.0" << endl;
	}
	else
	{
		cout << "cars with a capacity of less than 1.0 are present" << endl;
	}

}