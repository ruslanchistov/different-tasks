//��� ������ ���������� � ���� � ������� ����������.
//�������� ����� �������� � ��������� ��� ���������,
//������� ������� ������� �������������� � ������,
//������ � �������������� �������



#include<iostream>
#include<windows.h>
int main()
{
	using namespace std;
	SetConsoleCP(1251);
	system("chcp 1251");
	system("cls");
	setlocale(LC_ALL, "Russian");

	char string1[] = "�������";
	char string2[] = " ���������� ����!!!";
	char string3[sizeof(string1) + sizeof(string2) - 1];
	char* pstr1 = string1;
	char* pstr2 = string2;
	char* pstr3 = string3;

	int i = 0;
	for (; i < sizeof(string1)-1; i++)
	{		
		pstr3[i] = pstr1[i];		
		cout << pstr3[i];
	}
	for (int j = 0; j < sizeof(string2)-1; i++,j++)
	{
		pstr3[i] = pstr2[j];
		cout << pstr3[i];
	}
	cout << endl;	
	return 0;
}