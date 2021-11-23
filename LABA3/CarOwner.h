#pragma once
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <locale.h>
using namespace std;
class CarOwner
{
private:
	string Name = "";//имя
	string Surname = "";//фамилия
	string phonNumber = "";//номер телефона
public:
	//контруктор
	CarOwner();
	// Функции получения данных из полей
	string Getname();
	string Getsurname();
	string PhonNumber();
	~CarOwner();//дуструктор

	void InitOwner(string name, string surname, string phonNumber);//Инициализация
	void InputOwner();//Изменение данных
	void OutputOwner();//Вывод данных
	void DeleteOwner();//Удаление данных
};
