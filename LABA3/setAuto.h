#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <locale.h>
using namespace std;
class SetAuto {
private:
	string brand = "";//марка
	string series = "";//серия
	string numberAuto = "";//серия
	int CarBody = 0;
public:
	SetAuto();//Конструктор
	// Функции получения данных из полей
	string getBrand();
	string getSeries();
	string getNumberAuto();
	int getCarBody();

	~SetAuto();//дуструктор
	
	void InitAuto(string brand, string series, string numberAuto, int CarBody);//Инициализация
	void InputAuto();//Изменение данных
	void OutputAuto();//Вывод данных
	void DeleteAuto();//Удаление данных

};
