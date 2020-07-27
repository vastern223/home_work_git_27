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