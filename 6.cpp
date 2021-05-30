/*Необходимо предложить пользователю ввести такие данные : возраст, имя, фамилию, профессию.
После каждого ввода показывать данные самого старшего пользователя и выводить средний возраст всех пользователей*/



#include<iostream>
#include <Windows.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	using namespace std;
	
	int cur_AGE = 0;
	int max_AGE = 0;
	int sum_AGE = 0;
	char cur_name = 0;
	char max_name = 0;
	int counter = 0;
	
	for ( ; ; )
	{
		cout << endl << "Введите возраст :  ";
		cin >> cur_AGE;
		cout << endl << "Введите имя :  ";
		cin >> cur_name;

		sum_AGE = sum_AGE + cur_AGE;
		counter++;
		

			if (cur_AGE > max_AGE)
		{
			max_AGE = cur_AGE;
			
			max_name = cur_name;
		}

		cout << endl << "Самый старший  :" << max_name << "   Возраст  :" << max_AGE;
		cout << endl << "Средний возраст " << counter << "   человек :  " << (float)sum_AGE/counter;
		cout << endl << "Будете ещё вводить данные  y/n  : ?";
		char exit = 0;
		cin >> exit;
		if ((exit == 'n') || (exit == 'N'))
		{
			break;
		}
		
	}
	return 0;
}