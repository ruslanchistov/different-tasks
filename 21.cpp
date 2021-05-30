//Двухмерный массив А переписать в массив В в обратном порядке.

#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	system("chcp 1251");
	system("cls");
	setlocale(LC_ALL, "Russian");
	int massA[4][3] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int massB[4][3];
	for (int i = 0,  k = 3; i < 4; i++, k--)
	{
		for (int j = 0, l = 2; j < 3; j++, l--)
		{
			massB[k][l] = massA[i][j];
		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << massB[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << "\n";
	return 0;
}