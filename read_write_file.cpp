#include<iostream>
#include<fstream>
#include<string>
#include<windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	fstream fs;
	string name = "my_file.txt";
	fs.open(name, fstream::in | fstream::out | fstream::app);//in - ������, out - ������, app - ��������.
	if (!fs.is_open())
	{
		cout << "error open file !!!" << endl;
	}
	else
	{
		string str;
		int vibor = 0;
		cout << "1 - write , 2 - read" << endl;
		cin >> vibor;
		if (vibor == 1)
		{
			cout << "enter text" << endl;
			SetConsoleCP(1251);					//��������� ��� ����� ������� ��������.
			cin >> str;

			fs << str << "\n";
			SetConsoleCP(866);					//���������� ��������� �������.
		}
		if (vibor == 2)
		{
			while (!fs.eof())
			{
				str = "";						//����� �� ���������� ��� ���� ��������� ������.
				fs >> str;
				cout << str << endl;
			}
		}
		fs.close();
	}	
	return 0;
}