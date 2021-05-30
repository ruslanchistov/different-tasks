/*Нарисовать равнобедренный треугольник из символов^ . Высоту выбирает пользователь.*/

#include<iostream>
#include <Windows.h>


int main()
{
	setlocale(LC_ALL, "Russian");
	using namespace std;

	int height = 0;
	int counter_space = 0;
	int counter_symbol = 1;

	cout << "Введите высоту равнобедренного треугольника  : ";
	cin >> height;
	counter_space = height - 1; 

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < counter_space; j++)
		{
			cout << ' ';
		}
		for (int k = 0; k < counter_symbol; k++)
		{
			cout << '^';
		}
		counter_symbol += 2;
		counter_space -= 1;
		cout << endl;
	}
	return 0;
}
