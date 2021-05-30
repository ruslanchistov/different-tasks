/*запись и чтение файла*/

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
	fopen_s(&f1, name1, "w");       /*открываем файл на запись*/
	
	scanf_s("%d", &x);				/*считываем данные из консоли*/
	fprintf(f1, "%d", x);			/*записываем данные в файл*/
	fclose(f1);
	fopen_s(&f1, name1, "r");
	fopen_s(&f2, name2, "w");
	fscanf_s(f1, "%d", &y);			/*считываем данные из первого файла*/
	y *= 10;						/*изменяем данные*/
	fprintf(f2, "%d", y);			/*сохраняем их в другом файле*/
	fclose(f1);
	fclose(f2);
	return 0;
}