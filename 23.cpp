//� ������� �������� ���������� ������������ ����� ������ ������ ��������

#include<iostream>
#include<windows.h>
int main()
{
	SetConsoleCP(1251);
	system("chcp 1251");
	system("cls");
	setlocale(LC_ALL, "Russian");

	char mass[31] = { "as gfh   juy    kji lh nh gfr " };
	int counter = 0;
	int counter_max = 0;
	for (int i = 0; i < 30; i++)		
	{
		if (mass[i] == ' ')
		{
			counter++;

			if (counter > counter_max)
			{
				counter_max = counter;
			}
		}
		else
		{
			counter = 0;
		}
	}
	printf("������������ ����������,������ ������,�������� ����� %d\n", counter_max);
	return 0;
}