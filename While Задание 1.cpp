#include <iostream>
using namespace std;

int main()
{
    setlocale (LC_ALL, "Russian");
    float a, b, c, d;
    cout << "���������� �� ���� (��): ";
    cin >> a;
    cout << "������ ������� (������ �� 100 �� �������): ";
    cin >> b;
    cout << "���� ����� ������� (���.):";
    cin >> c;
    d = ((a % 100) * b) * c;
    cout << "������� �� ���� � ������� ��������� � " << d << "���.";









    return 0;
}
