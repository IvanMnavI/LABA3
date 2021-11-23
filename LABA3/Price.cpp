#include "Price.h"

CarPrice::CarPrice()
{
	price = "";
}

string CarPrice::getPtice()
{
	return this->price;
}

CarPrice::~CarPrice()
{
	;
}

void CarPrice::InitPrice(string price)
{
	this->price = price;
}

void CarPrice::InputPrice()
{
	printf_s("\nВведите Цену автомобиля:");
	cin >> price;
}

void CarPrice::OutputPrice()
{
	if (price[0] == 0)
	{
		cout << "Цена автомобиля: Пусто" << endl;
	}
	else
		cout << "Цена автомобиля: " << price<< endl;
	printf_s("\n");
}

