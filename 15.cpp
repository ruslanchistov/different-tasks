//Сливаем два массива в один


#include<iostream>
using namespace std;
int main()
{
	int mass1[2][3] = { {1,2,3},{4,5,6 }};
	int mass2[3][4] = { {7,8,9,10},{11,12,13,14},{15,16,17,18} };
	int mass3[3][6];

	// Заносим содержимое массива mass1 в массив mass3

	int k = 0;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			mass3[0][k] = mass1[i][j];
			k++;
		}
	}
	// Заносим содержимое массива mass2 в массив mass3
	int l = 1;
	k = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			mass3[l][k] = mass2[i][j];			
			if ((i == 1) && (j == 1))
			{
				l++;
				k = 0;
			}
			else
			{
				k++;
			}
		}
	}
	// Выводим на экран содержимое массива mass3

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			printf("%d \t", mass3[i][j]);
		}
		printf("\n\n");
	}
	return 0;
}