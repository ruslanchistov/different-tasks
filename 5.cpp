/*�������� ���������, ������� ����� ���������� �� ����� ������� �����, ���������� �������������.
������������ ������ ��� ������ � ����� �� ��������� ��� ��������������.*/


#include<iostream>
#include <Windows.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	using namespace std;
	unsigned long namber = 0;
	

	cout << "������� ����� ";
	cin >> namber;

	for (; ; )
	{
		cout << endl << "�������  " << namber << "   �����   " << namber * namber << endl;
		namber = namber * namber;
		char otvet = 0;
		cout << "������ ���������� ? y/n ?";
		cin >> otvet;

		if ((otvet == 'n') || (otvet == 'N'))
		{
			break;
		}
	}
	return 0;
}