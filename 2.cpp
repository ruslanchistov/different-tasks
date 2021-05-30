/*1. Создайте 4 переменные с разными типами данных и предложите пользователю ввести в них значения.
2. После ввода, отобразите их на экране*/

#include<iostream>
#include <Windows.h>

int main()
{
	setlocale(LC_ALL, "Russian");	
	using namespace std;

	bool var1;
	char var2;
	int var3;
	float var4;

	cout << "Введите логическую переменную   ";
	cin >> var1;
	cout << endl << "Введите символьную переменную   ";
	cin >> var2;
	cout << endl << "Введите целую переменную   ";
	cin >> var3;
	cout << endl << "Введите дробную переменную   ";
	cin >> var4;

	cout << endl << "Ваши переменные : " << endl << var1 << endl << var2 << endl << var3 << endl << var4 ;
	return 0;
}

