#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, c;



    cout << "������� 3 ����� " << endl;
    cin >> a >> b >> c;

    cout << "����� ���� ����� = " << a + b + c  << endl;

    cout << "������������ ���� ����� = "  << a * b * c << endl;

    cout << "������� �������������� ���� �����  = "  << (double)(a + b + c) / 3 << endl;





    return 0;
}
