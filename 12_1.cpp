/*�������� �������, ������� ������ ����� ������� ����� � ���������� �������� ���������� ���� int.*/


#include<iostream>
#include <Windows.h>


void func(char*);

int main()
{

    setlocale(LC_ALL, "russian");
    using namespace std;

    int VAR1 = 0;
    cout << "������� ����� ����� : ";
    cin >> VAR1;
      
    int* pVAR1 = &VAR1;
    char* VAR = (char*)&VAR1;
    func((char*)&VAR1);
    cout << endl << "��������� : " << VAR1;
    return 0;
}



    void func(char*VAR )
    {                                                             
        *VAR =*VAR ^ *(VAR + 3);                 
        *(VAR + 3) = *VAR ^ *(VAR + 3);       //  ������ ������� ������ � �������� �����.        
        *VAR = *VAR ^ *(VAR + 3);

        *(VAR + 1) = *(VAR + 1) ^ *(VAR + 2);  
        *(VAR + 2) = *(VAR + 1) ^ *(VAR + 2);        //  ������ ������� ������ � ������ �����.
        *(VAR + 1) = *(VAR + 1) ^ *(VAR + 2);                              
    }


    