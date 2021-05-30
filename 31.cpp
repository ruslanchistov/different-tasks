//Передать в функцию динамический массив. Вывести его адрес.
//Вывести последний и предпоследний элемент


#include<iostream>
using namespace std;


void func(int* pmass)
{
	printf("%p\n", pmass);
	printf("Последний элемент : %d\n", *(pmass + 9));
	printf("Предпоследний элемент : %d\n", *(pmass + 8));
}

int main()
{
	setlocale(LC_ALL, "russian");
	
	int* pmass = new int[10];
	for (int i = 0; i < 10; i++)
	{
		pmass[i] = i + rand() % 50;
	}
	func(pmass);
	delete[]pmass;
	return 0;
}