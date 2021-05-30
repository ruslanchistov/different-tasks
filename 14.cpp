//Меняем элементы массива в обратном порядке


#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	system("chcp 1251");
	system("cls");
	setlocale(LC_ALL, "Russian");
	int* mass = (int*)malloc(6 * sizeof(int));
	
	for (int i = 0; i < 6; i++)
	{
		cout << endl << " Введите  " << i << " -й элемент  ";
		cin >> mass[i];
	}
	
	for (int i = 0 ,k = 5; i < 3; i++, k --)
	{
		int cur = mass[i] ;
		mass[i] = mass[k] ;
		mass[k] = cur;
	}
	for (int i = 0; i < 6; i++)
	{
		cout << "   " << mass[i];
	}
	delete[] mass;
	return 0;
}