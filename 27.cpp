//ќбъ€вите указатель на массив типа int и выделите пам€ть дл€ size элементов.
//Ќеобходимо написать функцию, котора€ помен€ет значени€ четных и нечетных €чеек массива.


#include<iostream>
#include<windows.h>

int func(int*pmass, int size)

{
	for (int i = 0; i < size - 1; i+=2)
	{
		pmass[i] = pmass[i] ^ pmass[i + 1];
		pmass[i + 1] = pmass[i] ^ pmass[i + 1];
		pmass[i] = pmass[i] ^ pmass[i + 1];
	}
	return 0;
}



int main()
{
	using namespace std;
	SetConsoleCP(1251);
	system("chcp 1251");
	system("cls");
	setlocale(LC_ALL, "Russian");
	
	int* pmass;
	int size = 0;
	printf("¬ведите размер массива (чЄтное число): ");
	cin >> size;
	pmass = new int[size];
	for (int i = 0; i < size; i++)
	{
		pmass[i] = i ;
		printf("%d, ", pmass[i]);
	}
	printf("\n");
	func(pmass,size);
	for (int i = 0; i < size; i++)
	{
		printf("%d, ", pmass[i]);
	}	
	delete[] pmass;
	return 0;
}