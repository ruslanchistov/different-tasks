/*���������� ���������� ������������ ������ ����� ������ : �������, ���, �������, ���������.
����� ������� ����� ���������� ������ ������ �������� ������������ � �������� ������� ������� ���� �������������*/



#include<iostream>
#include <Windows.h>
#include<string>

int main()
{
	SetConsoleCP(1251);
	system("chcp 1251");
	system("cls");
	setlocale(LC_ALL, "Russian");
	using namespace std;
	
	int cur_AGE = 0;
	int max_AGE = 0;
	int sum_AGE = 0;
	string cur_name ;
	string max_name ;
	int counter = 0;
	
	for ( ; ; )
	{
		

		cout << endl << "������� ��� :  ";
		cin >> cur_name;
		cin.sync();
		cout  << endl << "������� ������� :  ";
		cin >> cur_AGE;
		cin.sync();
		sum_AGE = sum_AGE + cur_AGE;
		counter++;
		

			if (cur_AGE > max_AGE)
		{
			max_AGE = cur_AGE;
			
			max_name = cur_name;
		}

		cout << endl << "����� �������  :" << max_name << "   �������  :" << max_AGE;
		cout << endl << "������� ������� " << counter << "   ������� :  " << (float)sum_AGE/counter;
		cout << endl << "������ ��� ������� ������  y/n (�/�) : ?";
		char exit = 0;
		cin >> exit;
		if ((exit == 'n') || (exit == 'N')||(exit =='�')||(exit == '�'))
		{
			break;
		}
		
	}
	return 0;
}