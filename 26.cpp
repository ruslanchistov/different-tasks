//Дан указатель : double** p = 0;
//Выполните следующие задания :
//*создайте конструкцию, изображенную на рисунке;
//*выведите число, указанное в квадратике, на экран;
//*после этого удалите все динамические объекты.



#include<iostream>
#include<windows.h>
int main()
{
	using namespace std;
	SetConsoleCP(1251);
	system("chcp 1251");
	system("cls");
	setlocale(LC_ALL, "Russian");
	double** p = 0;
	p = new (double*);	
	*p = new (double);
	**p = 5;
	cout << **p << endl;
	delete *p;
	delete p;
	return 0;
}