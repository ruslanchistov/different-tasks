/*������ � ������ �����*/

#include<iostream>
#include<stdio.h>
#include<string>
#include<stdlib.h>
using namespace std;

int main()
{
	FILE* f1,*f2;
	int x, y;
	char name2 [] = "d:\\c+.txt";
	char name1 [] = "d:\\c++.txt";
	fopen_s(&f1, name1, "w");       /*��������� ���� �� ������*/
	
	scanf_s("%d", &x);				/*��������� ������ �� �������*/
	fprintf(f1, "%d", x);			/*���������� ������ � ����*/
	fclose(f1);
	fopen_s(&f1, name1, "r");
	fopen_s(&f2, name2, "w");
	fscanf_s(f1, "%d", &y);			/*��������� ������ �� ������� �����*/
	y *= 10;						/*�������� ������*/
	fprintf(f2, "%d", y);			/*��������� �� � ������ �����*/
	fclose(f1);
	fclose(f2);
	return 0;
}