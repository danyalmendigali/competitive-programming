#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    cout << "������� ����� ��� �������� �� ��������: ";
    cin >> a;

    if (a%2==0)
    {
        cout << "����� " <<a<< " ������!" << endl;
    }
    else
    {
        cout << "����� " <<a<< " �� ������!" << endl;
    }

    return 0;
}
