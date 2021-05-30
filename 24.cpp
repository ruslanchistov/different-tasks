//Создать динамический массив целых чисел.Определить сумму элементов массива;

#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	system("chcp 1251");
	system("cls");
	setlocale(LC_ALL, "Russian");
	int* pmass = (int*)malloc(6 * sizeof(int));
	int summa = 0;
	for (int i = 0; i < 6; i++)
	{
		cout << endl << " Введите  " << i << " -й элемент  ";
		cin >> pmass[i];
		summa += pmass[i];
	}
	cout << endl << "Сумма  " << summa<< endl;
	delete[]pmass;
	return 0;
}
	