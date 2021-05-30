/*Написать программу, которая будет показывать на экран квадрат числа, введенного пользователем.
Пользователь должен сам решать – выйти из программы или продолжитьввод.*/


#include<iostream>
#include <Windows.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	using namespace std;
	unsigned long namber = 0;
	

	cout << "Введите число ";
	cin >> namber;

	for (; ; )
	{
		cout << endl << "Квадрат  " << namber << "   равен   " << namber * namber << endl;
		namber = namber * namber;
		char otvet = 0;
		cout << "Будете продолжать ? y/n ?";
		cin >> otvet;

		if ((otvet == 'n') || (otvet == 'N'))
		{
			break;
		}
	}
	return 0;
}