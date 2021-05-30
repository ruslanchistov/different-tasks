/*Пользователь вводит порядковый номер пальца руки.
Необходимо показать его название на экран.*/

#include<iostream>
#include <Windows.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	using namespace std;

	int namber = 0;
	cout << "Введите порядковый номер пальца :  ";
	cin >> namber;

	switch (namber)
	{
	case 1:
		cout << endl << "Большой";
		break;
	case 2:
		cout << endl << "Указательный";
		break;
	case 3:
		cout << endl << "Средний";
		break;
	case 4:
		cout << endl << "Безымянный";
		break;
	case 5:
		cout << endl << "Мизинец";
		break;
	default:
		cout << endl << "Некорректный ввод данных !!!";
	}
	return 0;
}


