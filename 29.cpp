//Выделить память под целочисленную переменную динамически
//Передать ее в функцию в качестве параметра где вывести на экран
//Освободить память



#include<iostream>
using namespace std;
void print(int* p)
{
	cout << *p << endl;
}

int main()
{
	int* pa;
	pa= new (int);
	*pa = 10;
	print(pa);
	delete pa;
	return 0;
}