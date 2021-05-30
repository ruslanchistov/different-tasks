/*Организовать беспрерывный ввод чисел с клавиатуры, пока пользователь не введёт 0.
После ввода нуля, показать на экран количество чисел, которые были введены, их общую сумму и среднее арифметическое.*/


#include<iostream>
#include <Windows.h>


int main()
{
	setlocale(LC_ALL, "Russian");
	using namespace std;

	float namber = 0;
	float sum_namber = 0;
	int counter = -1;

	cout << "Введите любое число ( 0 - выход)" << endl;

	for (; ; )
	{
		cin >> namber;
		sum_namber += namber;
		counter++;
		if (0 == namber)
		{
			cout << "Количество чисел : " << counter << endl;
			cout << "Сумма введённых чисел : " << sum_namber << endl;
			cout << "Среднее арифметическое : " << (float)sum_namber / counter << endl;
			break;
		}
	}
	return 0;
}
