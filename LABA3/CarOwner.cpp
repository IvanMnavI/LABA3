#include "CarOwner.h"

CarOwner::CarOwner()
{
	Name = ""; //Имя
	Surname = ""; //Фамилия
	phonNumber = "";//Телефон владельца
}
// Функции получения данных из полей

string CarOwner::Getname()
{
	return this->Name;
}

string CarOwner::Getsurname()
{
	return this->Surname;
}

string CarOwner::PhonNumber()
{
	return this->phonNumber;
}
//дуструктор
CarOwner::~CarOwner()
{
	;
}
//Инициализация

void CarOwner::InitOwner(string name, string surname, string phonNumber)
{
	this->Name = name;
	this->Surname = surname;
	this->phonNumber = phonNumber;
}
//Изменение данных
void CarOwner::InputOwner()
{
	printf_s("Введите имя владельца:");
	cin >> Name;
	printf_s("Введите фамилию владельца:");
	cin >> Surname;
	printf_s("Введите номер телефона владельца:");
	cin >> phonNumber;
}
//Вывод данных
void CarOwner::OutputOwner()
{
	if ((Name[0] == 0) && (Surname[0] == 0) && (phonNumber[0] == 0))
	{
		cout << "имя владельца: Пусто" << endl;
		cout << "фамилию владельца: Пусто" << endl;
		cout << "номер телефона владельца: Пусто" << endl;
	}
	else
	{
		cout << "имя владельца:" << Name << endl;
		cout << "фамилия владельца:" << Surname << endl;
		cout << "номер телефона владельца:" << phonNumber << endl;
	}
	printf_s("\n");

}

