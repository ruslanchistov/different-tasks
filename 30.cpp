//�������� ������ �� ������������� ����������.
//�������� �� � ������� � �������� ��������� ��� ������� �� �����.

#include<iostream>
using namespace std;
void print(int& l)
{
	printf("%d\n", l);
}

int main()
{
	int a = 10;
	int& la = a;
	print(la);
	return 0;
}