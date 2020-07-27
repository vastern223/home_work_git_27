#include "Menu_cars.h"

void Menu_cars::Add_car()
{
	string name;
	int year_of_issue;
	float engine_capacity;
	int price;
	cout << "Enter name car" << endl;
	cout << "->";
	cin >> name;
	cout << "Enter year of issue" << endl;
	cout << "->";
	cin >> year_of_issue;
	cout << "Enter engine capacity" << endl;
	cout << "->";
	cin >> engine_capacity;
	cout << "Enter price" << endl;
	cout << "->";
	cin >> price;

	cl.Add_car(Car(name, year_of_issue, engine_capacity, price));
}
