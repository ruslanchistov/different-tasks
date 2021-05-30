//Написать функцию, принимающую указатель на строку и выводящую
//каждый второй символ, начиная с конца строки.

#include<iostream>
using namespace std;

void func(char* pstr)
{	
	for (int i = 24; i >= 0; i-=2)		
	{
		cout << *(pstr +i);
	}
}


int main()
{
	char str[27] = "abcdefghijklmnopqrstuvwxyz";
	char* pstr;
	pstr = str;
	func(pstr);
	return 0;
}
