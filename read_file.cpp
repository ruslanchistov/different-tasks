#include <iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	ifstream fin;
	
	fin.open("my_file");
	if (!fin.is_open())
	{
		cout << "error open file" << endl;
	}
	else
	{
		string str;
		while (!fin.eof())				//Пока не конец файла.
		{
			getline(fin, str);			//Построчное чтение.
			cout << str ;
		}

		/*char ch;
		while (fin.get(ch))				//Пока есть символы.
		{
			cout << ch;					//Посимвольное чтение.
		}*/



		fin.close();
	}
	return 0;
}