#include <iostream>
#include <iostream>
#include <windows.h>
#include "setAuto.h"
#include "CarOwner.h"
#include "InfAbaCar.h"
#include "Exit.h"
#include "Price.h"

#include <string>
int menu()
{
    int i;
    system("cls");
    printf_s(" 1) Ввод данных Авто\n 2) Информацыя владельца\n 3) Доп. информация\n 4) Цена Автомобиля\n 5) Выход и удаление\n 0) Выход из программы\n\n Choose: ");
    scanf_s("%d", &i);
    return i;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string brend = "BMW";
    string series = "X";
    string number = "B222MB22reg";
    int _carBody = 0;
    SetAuto* Auto = new SetAuto;
    string name = "Ivan";
    string surname = "Zamyatin";
    string phonNumber = "8983-555-5555";
    CarOwner* owner = new CarOwner[2];
    int color = 1;
    int carCondition = 1;
    int DTP = 0;
    CarInfo info[2];
    CarInfo* INFO1 = new CarInfo;
    CarInfo* INFO2 = new CarInfo;
    info[0] = *INFO1;
    info[1] = *INFO2;
    string prices = "1.500.000";
    CarPrice* Price = new CarPrice;
    int n = 0;
    int f = 1;
    int l;
    do
    {
        switch (menu())
        {
        case 0:
        {
            f = 0;
            break;
        }
        case 1: {
            do
            {
                system("cls");
                printf_s("\n 1 - инициализация\n 2 - ввод\n 3 - вывод\n 0 - выход\n\nвыш выбор: ");
                scanf_s("%d", &n);
                if (n == 1)
                {
                    (*Auto).InitAuto(brend, series, number, _carBody);
                }
                if (n == 2)
                {
                    (*Auto).InputAuto();
                }
                if (n == 3)
                {
                    (*Auto).OutputAuto();
                    system("pause");
                }
            } while (n != 0);
            break;
        }
        case 2:
        {
            do
            {
                system("cls");
                printf_s("\n 1 - инициализация\n 2 - ввод\n 3 - вывод\n 4 - Удалить владельца\n 0 - выход\n\nвыш выбор: ");
                scanf_s("%d", &n);

                if (n == 1)
                {
                    do
                    {
                        printf("Enter  owner's number (1 - first, 2 - second): ");
                        scanf_s("%d", &l);
                    } while ((l<1)||(l>2));
                    owner[l - 1].InitOwner(name, surname, phonNumber);
                }
                if (n == 2)
                {
                    do
                    {
                        printf("Enter  owner's number (1 - first, 2 - second): ");
                        scanf_s("%d", &l);
                    } while ((l < 1) || (l > 2));
                    owner[l - 1].InputOwner();
                }
                if (n == 3)
                {
                    for (int i = 0; i < 2; i++)
                    {
                        owner[i].OutputOwner();
                    }                    
                    system("pause");
                }
                if (n == 4)
                {
                    do
                    {
                        printf("Enter  info number (1 - first, 2 - second): ");
                        scanf_s("%d", &l);
                    } while ((l < 1) || (l > 2));
                    owner[l - 1].DeleteOwner();
                    system("cls");
                    printf_s("\n DELETED!!!\n\n");
                    system("pause");
                }

            } while (n != 0);
            break;
        }
        case 3:
        {
            do
            {
                system("cls");
                printf_s("\n 1 - инициализация\n 2 - ввод\n 3 - вывод\n 4 - Удалить данные\n 0 - выход\n\nвыш выбор: ");
                scanf_s("%d", &n);
                if (n == 1)
                {
                    do
                    {
                        printf("Enter  info number (1 - first, 2 - second): ");
                        scanf_s("%d", &l);
                    } while ((l < 1) || (l > 2));

                    info[l-1].InitCarInfo(color, carCondition, DTP);
                }
                if (n == 2)
                {
                    do
                    {
                        printf("Enter  info number (1 - first, 2 - second): ");
                        scanf_s("%d", &l);
                    } while ((l < 1) || (l > 2));
                    info[l-1].InputCarInfo();
                }
                if (n == 3)
                {
                    for (int i = 0; i < 2; i++)
                    {
                        info[i].OutputCarInfo();
                    }
                    system("pause");
                }
                if (n == 4)
                {
                    do
                    {
                        printf("Enter  info number (1 - first, 2 - second): ");
                        scanf_s("%d", &l);
                    } while ((l < 1) || (l > 2));
                    info[l - 1].DeleteDate();
                    system("cls");
                    printf_s("\n DELETED!!!\n\n");
                    system("pause");
                }

            } while (n != 0);
            break;
        }
        case 4:
        {
            do
            {
                system("cls");
                printf_s("\n 1 - инициализация\n 2 - ввод\n 3 - вывод\n 4 - Удалить цену\n 0 - выход\n\nвыш выбор: ");
                scanf_s("%d", &n);
                if (n == 1)
                {
                    Price -> InitPrice(prices);
                }
                if (n == 2)
                {
                    Price->InputPrice();
                }
                if (n == 3)
                {
                    Price->OutputPrice();
                    system("pause");
                }
                if (n == 4)
                {
                    Price->DeletePrice();
                    system("cls");
                    printf_s("\n DELETED!!!\n\n");
                    system("pause");
                }
            } while (n != 0);
            break;
        }
        case 5:
        {
            do
            {
                system("cls");
                printf_s("\n 1 - Выход и удаление\n 0 - Выход\n Ваш выбор: ");
                scanf_s("%d", &n);
                if (n == 0)
                {
                    (*Auto).DeleteAuto();
                    Price->DeletePrice();
                    for (int i = 0; i < 2; i++)
                    {
                        owner[i].DeleteOwner();
                        info[i].DeleteDate();
                    }
                }
            } while (n != 0);
            break;
        }
        default:
            break;
        }

    } while (f);
    delete Auto;
    delete[] owner;
    delete Price;
    delete INFO1;
    delete INFO2;
}

