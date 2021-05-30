#include <iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;

	fout.open("my_file.txt", ofstream::app);
	if (!fout.is_open())
	{
		cout << "error open file" << endl;
	}
	else
	{
		for (int i = 0; i < 100; i++)
		{
			fout << " " << i;
		}
		fout.close();
	}
	return 0;
}