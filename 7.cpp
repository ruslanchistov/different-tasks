/*������������ ������������ ���� ����� � ����������, ���� ������������ �� ����� 0.
����� ����� ����, �������� �� ����� ���������� �����, ������� ���� �������, �� ����� ����� � ������� ��������������.*/


#include<iostream>
#include <Windows.h>


int main()
{
	setlocale(LC_ALL, "Russian");
	using namespace std;

	float namber = 0;
	float sum_namber = 0;
	int counter = -1;

	cout << "������� ����� ����� ( 0 - �����)" << endl;

	for (; ; )
	{
		cin >> namber;
		sum_namber += namber;
		counter++;
		if (0 == namber)
		{
			cout << "���������� ����� : " << counter << endl;
			cout << "����� �������� ����� : " << sum_namber << endl;
			cout << "������� �������������� : " << (float)sum_namber / counter << endl;
			break;
		}
	}
	return 0;
}
