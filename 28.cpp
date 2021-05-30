//Передать в функцию массив по ссылке и вывести его на экран


#include<iostream>
#include<windows.h>
using namespace std;

void print(int(& lmass)[10])

{
	for (int i = 0; i < 10; i++)
	{
		printf("%d  ",lmass[i]);
	}
}



int main()
{
	
	SetConsoleCP(1251);
	system("chcp 1251");
	system("cls");
	setlocale(LC_ALL, "Russian");
	int mass[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int & lmass = mass[10];
	print(mass);
	return 0;
}


