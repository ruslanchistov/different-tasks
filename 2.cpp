/*1. �������� 4 ���������� � ������� ������ ������ � ���������� ������������ ������ � ��� ��������.
2. ����� �����, ���������� �� �� ������*/

#include<iostream>
#include <Windows.h>

int main()
{
	setlocale(LC_ALL, "Russian");	
	using namespace std;

	bool var1;
	char var2;
	int var3;
	float var4;

	cout << "������� ���������� ����������   ";
	cin >> var1;
	cout << endl << "������� ���������� ����������   ";
	cin >> var2;
	cout << endl << "������� ����� ����������   ";
	cin >> var3;
	cout << endl << "������� ������� ����������   ";
	cin >> var4;

	cout << endl << "���� ���������� : " << endl << var1 << endl << var2 << endl << var3 << endl << var4 ;
	return 0;
}

