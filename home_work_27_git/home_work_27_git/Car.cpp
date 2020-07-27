#include "Car.h"

Car::Car() :name("no_name"), year_of_issue(0), engine_capacity(0), price(0) { }

Car::Car(string name, int year_of_issue, float engine_capacity, int price)
{
	this->name = name;
	this->year_of_issue = year_of_issue;
	this->engine_capacity = engine_capacity;
	this->price = price;
}