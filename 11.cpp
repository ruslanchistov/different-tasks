/*������ ����� ����� ���������, ���� ��������� �������� 0x0A, 0x0B, 0x0C, 0x0D � �����
���������� ���� int ����� ������� :

                 0x0D       0x0C       0x0B      0x0A
                4 ����     3 ����     2 ����    1 ����*/


#include<iostream>
#include <Windows.h>

int main()
{

    setlocale(LC_ALL, "russian");
    using namespace std;

    int VAR1=0;
    int* pVAR1 = &VAR1; 
    char* pVAR2 = (char*)&VAR1;

    for (int i = 0; i < sizeof(int); i++, pVAR2++)
    {
        *pVAR2 = 0x0A + i ;
    }
    cout << VAR1;
    return 0;
    
}
