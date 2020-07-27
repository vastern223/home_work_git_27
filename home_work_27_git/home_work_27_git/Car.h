#pragma once
#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
	string name;
	int year_of_issue;
	float engine_capacity;
	int price;
public:

	Car();

	Car(string name, int year_of_issue, float engine_capacity, int price);

	void Show();

	string Get_name_car();

	int Get_name_year_of_issue();

	int Get_price();

};

