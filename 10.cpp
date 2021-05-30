/*С использованием рекурсии вывести на экран несколько первых символов латинского алфавита,
количество которых равно введенному пользователем числу.*/


#include<iostream>
#include <Windows.h>

using namespace std;

int counter = 0;
char symbol = 97;

void func(int counter)
{
	cout << symbol << "  ";
	symbol += 1;
	if (counter > 1)
	{
		func(counter - 1);
	}
}


int main()
{
	setlocale(LC_ALL, "russian");
	do
	{
		cout << "Сколько символов вывести ? ( от 1 до 26 ) : ";
		cin >> counter;
	}
	while (counter < 1 || counter > 26);
			
	func(counter);
	return 0;
}



