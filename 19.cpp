//����� �������������������� �������� ��������� ����������� �������.

#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	system("chcp 1251");
	system("cls");
	setlocale(LC_ALL, "Russian");
	int mass[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int summa = 0;
	for (int i = 0; i < 10; i++)
	{
		summa += mass[i];
	}	 
	cout << "������� �������������� ��������� ������� ����� : " << (float)summa / 10 << endl;
	return 0;
}

