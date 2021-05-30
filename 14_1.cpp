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

	int mass[4][3] = { 1,2,3,4,5,6,7,8,9,10,11,12 };

	for (int i = 0 , k =3; i < 2; i++, k --)
	{
		for (int j = 0 ,l = 2; j < 3; j++, l--)
		{
			mass[i][j] = mass[i][j] ^ mass[k][l];
			mass[k][l] = mass[i][j] ^ mass[k][l];
			mass[i][j] = mass[i][j] ^ mass[k][l];
		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << mass[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << "\n";
	return 0;
}