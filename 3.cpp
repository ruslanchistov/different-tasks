/*—оздайте 4 переменных типа char, предложите пользователю ввести слово из
четырех букв и покажите эти символы(слово) на экран*/


#include<iostream>
#include <Windows.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	system("cls");
	using namespace std;

	char var1;
	char var2;
	char var3;
	char var4;

	cout << ("¬ведите слово из четырЄх букв") << endl;
	cin >> var1 >> var2 >> var3 >> var4;
	cout << endl << "¬аше слово : " << var1 << var2 << var3 << var4 << endl;
	return 0;
}
