//�������� �������, ����������� � �������� ��������� ������ �����
//����� � ��������� ��� �� ����� � ���� �������.



#include<iostream>

void print(int mass[])
{
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", mass[i]);
	}
}

int main()
{
	int mass[10] = { 1,2,3,4,5,6,7,8,9,10 };
	print(mass);
	return 0;
}