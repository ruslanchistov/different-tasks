/*�������� 4 ���������� ���� char, ���������� ������������ ������ ����� ��
������� ���� � �������� ��� �������(�����) �� �����*/


#include<iostream>
#include <Windows.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	system("cls");
	using namespace std;

	char var1;
	char var2;
	char var3;
	char var4;

	cout << ("������� ����� �� ������ ����") << endl;
	cin >> var1 >> var2 >> var3 >> var4;
	cout << endl << "���� ����� : " << var1 << var2 << var3 << var4 << endl;
	return 0;
}
