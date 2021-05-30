/*Написать функцию, которая меняет задом наперед байты в переданной числовой переменной типа int.*/


#include<iostream>
#include <Windows.h>


void func(char*);

int main()
{

    setlocale(LC_ALL, "russian");
    using namespace std;

    int VAR1 = 0;
    cout << "Введите целое число : ";
    cin >> VAR1;
    int* pVAR1 = &VAR1;
    char* VAR2 = (char*)&VAR1;
    func((char*)&VAR1);
    cout << endl << "Результат : " << VAR1;
    return 0;
}



    void func(char*VAR )
    {

        char curVAR = 0;
        
        curVAR = *VAR;                       //                                     
        *VAR = *(VAR + 3);                  //  Меняем содержимое первого и четвёртого байтов
        *(VAR + 3) = curVAR;                //

        curVAR = *(VAR + 1);                 //
        *(VAR + 1) = *(VAR + 2);            //  Меняем содержимое второго и третьего байтов
        *(VAR + 2) = curVAR;                //
                                  
    }


    