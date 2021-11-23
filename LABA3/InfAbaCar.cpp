#include "InfAbaCar.h"
string Date = "";
//контруктор
CarInfo::CarInfo()
{
	color = 0;
	carCondition = 0;
	DTP = 0;
}
// Функции получения данных из полей
int CarInfo::getColor()
{
	return this->color;
}

int CarInfo::getCarCondition()
{
	return this->carCondition;
}

int CarInfo::getDTP()
{
	return this->DTP;
}
//дуструктор
CarInfo::~CarInfo()
{
	;
}

void CarInfo::InitCarInfo(int color, int carCondition, int DTP)//Инициализация
{
	this->color = color;
	this->carCondition = carCondition;
	this->DTP = DTP;
}

void CarInfo::InputCarInfo()//Изменение данных
{
	printf_s("Введите цвет автомобиля\n1)Черный\n2)Белый\n3)Красный\n4)Синий\nВаш выбор:");
	cin >> color;
	printf_s("Введите состояние автомобиля\n1)Отличное\n2)Хорошие\n3)неудворительное\nВаш выбор:");
	cin >> carCondition;
	printf_s("Попадала ли машина в ДТП(0-нет,1-да):");
	cin >> DTP;
	if (DTP == 1)
	{
		printf_s("Введите дату ДТП: ");
		cin >> Date;
	}

}

void CarInfo::OutputCarInfo()//Вывод данных
{
	if ((color == 0) && (carCondition == 0) && (DTP == 0)) {
		cout << "цвет автомобиля: Пусто" << endl;
		cout << "состояние автомобиля: Пусто" << endl;
		cout << "Попадала ли машина в ДТП: Пусто" << endl;
	}
	else
	{
		if (color == 1)
		{
			cout << "цвет автомобиля: Черный" << endl;

		}
		if (color == 2)
		{
			cout << "цвет автомобиля: Белый" << endl;
		}
		if (color == 3)
		{
			cout << "цвет автомобиля: Красный" << endl;
		}
		if (color == 4)
		{
			cout << "цвет автомобиля: Синий" << endl;
		}
		if (carCondition == 1)
		{
			cout << "состояние автомобиля: Отличное" << endl;
		}
		if (carCondition == 2)
		{
			cout << "состояние автомобиля: Хорошие" << endl;
		}
		if (carCondition == 3)
		{
			cout << "состояние автомобиля: неудворительное" << endl;
		}
		if (DTP == 0)
		{
			cout << "Попадала ли машина в ДТП: Нет" << endl;
		}
		if (DTP == 1)
		{
			cout << "Попадала ли машина в ДТП: Да, " << "Дата аварии: " << Date << endl;

		}

	}
	printf_s("\n");
}

