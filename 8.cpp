/*���������� ����������� ��� �������� ����� ����� � ���������, ������� ����� ������������ � ����������.*/


#include<iostream>
#include <Windows.h>


int main()
{
	setlocale(LC_ALL, "Russian");
	using namespace std;

	int min_namber = 0;
	int max_namber = 0;
	int summa = 0;

	cout << "������� �������� ����� �� (������������) : ";
	cin >> min_namber;
	cout << " �� (������������) : ";
	cin >> max_namber;

	if ((min_namber % 2)!= 0)
	{
		while( min_namber <= max_namber)
		{
			summa += min_namber;
			min_namber +=2;
			
		}
	}
	else
	{
		min_namber += 1;
		while ( min_namber <= max_namber )
		{
			summa += min_namber;
			min_namber += 2;
		}
	}
	cout << endl << "����� �������� ����� ������ ��������� �����  " << summa;
	return 0;
}
