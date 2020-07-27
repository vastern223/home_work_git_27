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


void  Menu_cars::Delete_all_cars_manufactured_before_2000()
{
	cl.Delete_all_cars_manufactured_before_2000();
}

void Menu_cars::Show_all_cars()
{
	cl.Show_all_cars();
}
void Menu_cars::Show_by_name_car()
{
	string name;
	cout << "Enter name car" << endl;
	cout << "->";
	cin >> name;
	cl.Show_by_name_car(name);

}

void Menu_cars::Show_by_year()
{
	int year_of_issue;
	cout << "Enter year of issue" << endl;
	cout << "->";
	cin >> year_of_issue;
	cl.Show_by_year(year_of_issue);
}

void Menu_cars::Show_by_price()
{
	int price;
	cout << "Enter price" << endl;
	cout << "->";
	cin >> price;
	cl.Show_by_price(price);
}
