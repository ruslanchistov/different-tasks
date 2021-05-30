/*1. Объявить три переменные типа int и присвоить первой числовое значение, вторая переменная равна первой переменной
увеличенной на 3, а третья переменная равна сумме первых двух.
2. Вывести значения переменных на экран*/



#include<iostream>
int main()
{
	setlocale(LC_ALL, "Russian");
	using namespace std;
	cout << "Введите число" << endl;
	int var1;
	int var2;
	int var3;
	cin >> var1;
	cout << "Ваше число : " << var1 << endl;
	var2 = var1 + 3;
	cout << "Вторая перемменная : " << var2 << endl;
	cout << "Третья переменная : " << var1 + var2 << endl;
	return 0;
}