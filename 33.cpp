//Объявить динамический двумерный массив. Передать через параметры в функцию.
//Инициализировать.Вывести на экран.



#include<iostream>
#include<string>


void func(int* p, int k)
{
	for (int i = 0; i < k; i++)
	{
		p[i] = 11 % (i + 1);
	}
}

int main()
{
	SetConsoleCP(1251);
	system("chcp 1251");
	system("cls");
	setlocale(LC_ALL, "Russian");
	using namespace std;


	int(* pmass)[4];
	pmass = new int[3][4];
	func(*pmass, 3 * 4);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << pmass[i][j] << "\t";
		}
		cout << "\n";
	}	
	delete[]pmass;
	return 0;
}