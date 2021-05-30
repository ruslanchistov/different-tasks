//Перемножить матрицы А и В, результат сохранить в матрице С.

#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	system("chcp 1251");
	system("cls");
	setlocale(LC_ALL, "Russian");
	int massA[4][2] = { {1,2},{3,4},{5,6},{7,8} };
	int massB[2][3] = { {9,10,11},{12,13,14} };
	int massC[4][3] ;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			massC[i][j] = 0;

			for (int k = 0; k < 2; k++)
			{

				massC[i][j] = massC[i][j] + massA[i][k] * massB[k][j] ;
			}

		}
	}

		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				printf("%d\t", massC[i][j]);
			}
			printf("\n\n");
		}
		return 0;
}