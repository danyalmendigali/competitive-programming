#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int isDayNumber;
    cin >> isDayNumber;
    switch(isDayNumber)
    {
  case 1:
    cout << "����������� : 7:00 ������, 20:00 ����" << endl;
    break;

     case 2:
    cout << "����������� : 8:00 ������, 20:00 ����" << endl;
    break;

     case 3:
    cout << "����������� : 9:00 ������, 20:00 ����" << endl;
    break;

     case 4:
    cout << "����������� : 10:00 ������, 20:00 ����" << endl;
    break;

     case 5:
    cout << "����������� : 11:00 ������, 20:00 ����" << endl;
    break;

     case 6:
    cout << "����������� : 10:00 ������, 20:00 ����" << endl;
    break;

     case 7:
    cout << "����������� : 4:00 ������, 20:00 ����" << endl;
    break;


    }








    return 0;
}
