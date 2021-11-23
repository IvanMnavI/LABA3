#pragma once
#include <locale.h>
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include "InfAbaCar.h"
#include "CarOwner.h"
#include "setAuto.h"
#include "Price.h"
using namespace std;
class Exit
{

private:
	string null = "";

	int noll = 0;
public:
	Exit(); //Конструктор

	~Exit(); //Деструктор

	// Функции получения данных из полей

	string Getnull();

	int Getnoll();
};