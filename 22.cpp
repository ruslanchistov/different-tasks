//Поменять местами максимальное и минимальное значения массива.

#include<iostream>
int main()
{
	int mass[4][3] = { {6,9,4},{3,1,8},{10,25,14},{15,7,18} };
	int min = mass[0][0];
	int max = mass[0][0];
	int i_min, j_min, i_max, j_max;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d\t", mass[i][j]);
			if (mass[i][j] < min)
			{
				min = mass[i][j];
				i_min = i;
				j_min = j;
			}
			if (mass[i][j] > max)
			{
				max = mass[i][j];
				i_max = i;
				j_max = j;
			}
		}
		printf("\n\n");
	}
	mass[i_min][j_min] = mass[i_min][j_min] ^ mass[i_max][j_max];
	mass[i_max][j_max] = mass[i_min][j_min] ^ mass[i_max][j_max];
	mass[i_min][j_min] = mass[i_min][j_min] ^ mass[i_max][j_max];
	printf("\n\n\n");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d\t", mass[i][j]);
		}
		printf("\n\n");
	}
	return 0;
}