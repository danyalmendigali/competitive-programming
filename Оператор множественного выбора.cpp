#include <iostream>
using namespace std;

/*
    switch ( ��������� )
    case ��������1;
        ��������1;
           break;

*/
int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    cin >> a;

    switch (a)
    {

     case 1:
            cout << "�� ����� 1" << endl;
        break;


    case 2:
            cout << "�� ����� 2" << endl;
        break;

    default:
        cout  << "� �� ���� ����� �����  " << endl;
        break;
    }

    return 0;
}

