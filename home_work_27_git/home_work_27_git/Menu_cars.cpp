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

void Menu_cars::Sort_by_name_()
{
	cl.Sort_by_name_();
}

void Menu_cars::Sort_by_prise_()
{
	cl.Sort_by_prise_();
}

void  Menu_cars::Car_standard_euro_5()
{
	cl.Car_standard_euro_5();
}

void Menu_cars::The_total_price_of_cars_under_5_years()
{
	cl.The_total_price_of_cars_under_5_years();
}

void Menu_cars::reduce_the_price_by_20_for_all_cars_older_than_15()
{
	cl.reduce_the_price_by_20_for_all_cars_older_than_15();
}

void Menu_cars::Check_that_all_cars_have_the_correct_year_of_manufacture()
{
	cl.Check_that_all_cars_have_the_correct_year_of_manufacture();
}

void Menu_cars::check_if_there_is_a_car_with_a_price_of_more_than_100000()
{
	cl.check_if_there_is_a_car_with_a_price_of_more_than_100000();
}

void Menu_cars::Check_for_missing_cars_with_a_smaller_volume()
{
	cl.Check_for_missing_cars_with_a_smaller_volume();
}

void Menu_cars::Menu()
{
	int chois = 0;
	do
	{
		cout << " Car dealership" << endl;
		cout << "1-Add car" << endl;
		cout << "2-delete all cars manufactured before 2000" << endl;
		cout << "3-Car standard euro 5" << endl;
		cout << "4-The total price of cars under 5 years" << endl;
		cout << "5-reduce the price by 20 for all cars older than 15" << endl;
		cout << "6-Show all cars" << endl;
		cout << "7-Show by name car" << endl;
		cout << "8-Show by year" << endl;
		cout << "9-Show by price" << endl;
		cout << "10- Sort by name" << endl;
		cout << "11- Sort by prise" << endl;
		cout << "12-Check that all cars have the correct year of manufacture " << endl;
		cout << "13-check if there is a car with a price of more than 100000" << endl;
		cout << "14-Check for missing cars with a smaller volume" << endl;
		cout << "15- exit" << endl;
		cout << "->";
		cin >> chois;
		system("cls");
		switch (chois)
		{
		case 1:
		{

			Add_car();

		}
		break;
		case 2:
		{

			Delete_all_cars_manufactured_before_2000();

		}
		break;
		case 3:
		{
			Car_standard_euro_5();
		}
		break;
		case 4:
		{
			The_total_price_of_cars_under_5_years();

		}
		break;
		case 5:
		{
			reduce_the_price_by_20_for_all_cars_older_than_15();

		}
		break;
		case 6:
		{
			Show_all_cars();

		}
		break;
		case 7:
		{
			Show_by_name_car();
		}
		break;
		case 8:
		{
			Show_by_year();
		}
		break;
		case 9:
		{
			Show_by_price();
		}
		break;
		case 10:
		{
			Sort_by_name_();
		}
		break;
		case 11:
		{
			Sort_by_prise_();
		}
		break;
		case 12:
		{
			Check_that_all_cars_have_the_correct_year_of_manufacture();
		}
		break;
		case 13:
		{
			check_if_there_is_a_car_with_a_price_of_more_than_100000();
		}
		break;
		case 14:
		{
			Check_for_missing_cars_with_a_smaller_volume();
		}
		break;
		case 15:
		{
			cout << "bye";

		}
		break;
		}
		system("pause");
		system("cls");
	} while (chois != 15);
}