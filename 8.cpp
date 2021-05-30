/*Необходимо суммировать все нечётные целые числа в диапазоне, который введёт пользователь с клавиатуры.*/


#include<iostream>
#include <Windows.h>


int main()
{
	setlocale(LC_ALL, "Russian");
	using namespace std;

	int min_namber = 0;
	int max_namber = 0;
	int summa = 0;

	cout << "Введите диапазон чисел от (включительно) : ";
	cin >> min_namber;
	cout << " по (включительно) : ";
	cin >> max_namber;

	if ((min_namber % 2)!= 0)
	{
		while( min_namber <= max_namber)
		{
			summa += min_namber;
			min_namber +=2;
			
		}
	}
	else
	{
		min_namber += 1;
		while ( min_namber <= max_namber )
		{
			summa += min_namber;
			min_namber += 2;
		}
	}
	cout << endl << "Сумма нечётных чисел Вашего диапазона равна  " << summa;
	return 0;
}
