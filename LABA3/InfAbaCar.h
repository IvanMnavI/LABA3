#pragma once
#include <locale.h>
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
using namespace std;
class CarInfo
{
private:
	int color = 0;//цвет
	int carCondition = 0;//состояние
	int DTP = 0;//ДТП
public:
	//контруктор
	CarInfo();
	// Функции получения данных из полей
	int getColor();
	int getCarCondition();
	int getDTP();
	~CarInfo();//дуструктор

	void InitCarInfo(int color, int carCondition, int DTP);//Инициализация
	void InputCarInfo();//Изменение данных
	void OutputCarInfo();//Вывод данных
	void DeleteDate();//Удаление данных
};
