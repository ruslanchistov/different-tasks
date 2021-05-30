//Передать а функцию 2 целочисленные переменные через указатели и удвоить их


#include<iostream>
using namespace std;

void func(int* a, int* b)
{
	*a = *a * 2;
	*b = *b * 2;
}

int main()
{
	int a = 10;
	int b = 20;
	int* pa = &a;
	int* pb = &b;
	func(pa, pb);
	printf("a * 2 = %d\n", a);
	printf("b * 2 = %d\n", b);
	pa = NULL;
	pb = NULL;
	return 0;
}