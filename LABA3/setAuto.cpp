#include "setAuto.h"
#include <windows.h>
//Конструктор
SetAuto::SetAuto()
{
	brand = "";
	series = "";
	numberAuto = "";
	CarBody = 0;
}
// Функции получения данных из полей
string SetAuto::getBrand()
{
	return this->brand;
}

string SetAuto::getSeries()
{
	return this->series;
}

string SetAuto::getNumberAuto()
{
	return this->numberAuto;
}

int SetAuto::getCarBody()
{
	return this->CarBody;
}
//дуструктор
SetAuto::~SetAuto()
{
	;
}
//Инициализация
void SetAuto::InitAuto(string _brand, string _series, string _numberAuto, int _CarBody)
{
	this->brand = _brand;
	this->series = _series;
	this->numberAuto = _numberAuto;
	this->CarBody = _CarBody;
}
//Изменение данных
void SetAuto::InputAuto()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	SetAuto Auto;
	printf_s("\nВведите бренд автомобиля(BMW, Mercedes_benz ,Tayota)\nВвод:");
	cin >> brand;
	printf_s("\nВведите серию автомобиля(X,I,B-CLASS)\nВвод:");
	cin >> series;
	printf_s("\nВведите номер автомобиля(X000XX-XXreg)\nВвод:");
	cin >> numberAuto;
	printf_s("\nВыберите кузов автомобиля:\n1)Купэ\n2)Универсал\n3)Седан\n4)Хетчбэк\nВаш выбор:");
	cin >> CarBody;

}
//Вывод данных
void SetAuto::OutputAuto()
{
	if ((brand[0] == 0) && (series[0] == 0) && (numberAuto[0] == 0))
	{
		printf_s("\nBrand: Пусто");
		printf_s("\nSeries: Пусто");
		printf_s("\nNumber: Пусто");
	}
	else
	{
		cout << "Brand: " << brand << endl;
		cout << "Series: " << series << endl;
		cout << "Number: " << numberAuto << endl;
		if (CarBody == 1)
		{
			cout << "CarBody: Купэ" << endl;
		}
		if (CarBody == 2)
		{
			cout << "CarBody: Универсал" << endl;
		}if (CarBody == 3)
		{
			cout << "CarBody: Седан" << endl;
		}
		if (CarBody == 4)
		{
			cout << "CarBody: Хетчбэк" << endl;
		}

	}
	printf_s("\n");

}

