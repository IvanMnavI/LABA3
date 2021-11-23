#pragma once
#include <locale.h>
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
using namespace std;
class CarPrice
{
private:
	string price = "";
public:
	CarPrice();
	string getPtice();
	~CarPrice();

	void InitPrice(string price);
	void InputPrice();
	void OutputPrice();
	void DeletePrice();
};
