//Дано n чисел.Распечатать их в обратном порядке по m чисел в строке

#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	system("chcp 1251");
	system("cls");
	setlocale(LC_ALL, "Russian");
	int mass[12] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int k = 0;

	for (int i = 11; i >=0; i--)
	{
		cout << mass[i] << "\t";
		k++;
		if (k == 4)
		{
			cout << "\n";
			k = 0;
		}
		
	}
			
			
	cout << "\n";
	
	return 0;
}