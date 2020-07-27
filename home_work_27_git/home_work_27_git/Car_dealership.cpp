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
		if ((*iter).Get_name_year_of_issue() < 2009)
		{
			counter_euro_5++;
		}
	}

	cout << "Cars euro 5 :" << counter_euro_5 << endl;
}