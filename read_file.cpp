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
		while (!fin.eof())				//���� �� ����� �����.
		{
			getline(fin, str);			//���������� ������.
			cout << str ;
		}

		/*char ch;
		while (fin.get(ch))				//���� ���� �������.
		{
			cout << ch;					//������������ ������.
		}*/



		fin.close();
	}
	return 0;
}