#include"Exit.h"

Exit::Exit()//Конструктор
{
	null = "";
	noll = 0;
}

Exit::~Exit() //Деструктор
{
	;
}
// Функции получения данных из полей
string Exit::Getnull()
{
	return this->null;
}

int Exit::Getnoll()
{
	return this->noll;
}
//фун-ии удаление
void SetAuto::DeleteAuto() {
	Exit exit;
	string null;
	int noll;
	null = exit.Getnull();
	noll = exit.Getnoll();
	this->brand =null;
	this->series = null;
	this->numberAuto = null;
	this->CarBody = noll;
}
void CarOwner::DeleteOwner() {
	Exit exit;
	string null;
	null = exit.Getnull();
	this->Name = null;
	this->Surname = null;
	this->phonNumber = null;
}
void CarInfo::DeleteDate() {
	Exit exit;
	int noll;
	noll = exit.Getnoll();
	this->color = noll;
	this->carCondition = noll;
	this->DTP = noll;
}
void CarPrice::DeletePrice() {
	Exit exit;
	string null;
	null = exit.Getnull();
	this->price = null;
}