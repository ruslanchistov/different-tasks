/*������������ ������ ���������� ����� ������ ����.
���������� �������� ��� �������� �� �����.*/

#include<iostream>
#include <Windows.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	using namespace std;

	int namber = 0;
	cout << "������� ���������� ����� ������ :  ";
	cin >> namber;

	switch (namber)
	{
	case 1:
		cout << endl << "�������";
		break;
	case 2:
		cout << endl << "������������";
		break;
	case 3:
		cout << endl << "�������";
		break;
	case 4:
		cout << endl << "����������";
		break;
	case 5:
		cout << endl << "�������";
		break;
	default:
		cout << endl << "������������ ���� ������ !!!";
	}
	return 0;
}


