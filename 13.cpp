/*Написать функцию из задания 12, но для переменной любого числовоготипа.*/


#include<iostream>
#include <Windows.h>


void func(char*,int);

int main()
{

    setlocale(LC_ALL, "russian");
    using namespace std;

    int VAR1 = 0;
    cout << "Введите целое число : ";
    cin >> VAR1;
    int* pVAR1 = &VAR1;
    char* VAR2 = (char*)&VAR1;
    int size = sizeof(VAR1);

    func((char*)&VAR1,size);

    cout << endl << "Результат : " << VAR1;
    return 0;
}


void func(char*VAR,int size)

{
    char curVAR = 0;
    for (int i = 0; i < size / 2; i++)
    {
        curVAR = *(VAR + i);
        *(VAR + i) = *(VAR + size - 1 - i);
        *(VAR + size - 1 - i) = curVAR;
    }
}