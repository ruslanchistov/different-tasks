/*1. �������� ��� ���������� ���� int � ��������� ������ �������� ��������, ������ ���������� ����� ������ ����������
����������� �� 3, � ������ ���������� ����� ����� ������ ����.
2. ������� �������� ���������� �� �����*/



#include<iostream>
int main()
{
	setlocale(LC_ALL, "Russian");
	using namespace std;
	cout << "������� �����" << endl;
	int var1;
	int var2;
	int var3;
	cin >> var1;
	cout << "���� ����� : " << var1 << endl;
	var2 = var1 + 3;
	cout << "������ ����������� : " << var2 << endl;
	cout << "������ ���������� : " << var1 + var2 << endl;
	return 0;
}