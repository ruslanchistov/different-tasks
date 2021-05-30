//ќбъ€вить ссылку на целочисленную переменную.
//ѕередать ее в функцию в качестве параметра где вывести на экран.

#include<iostream>
using namespace std;
void print(int& l)
{
	printf("%d\n", l);
}

int main()
{
	int a = 10;
	int& la = a;
	print(la);
	return 0;
}