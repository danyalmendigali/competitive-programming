#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
    int a, b, temp;
     cin >> a >> b;
    cout << "�� ������ :" << endl;
    cout << " a = " << a << " b = " << b << endl;
    temp = a;
    a = b;
    b = temp;
    cout << "����� ������ :" << endl;
    cout << " a = " << a << " b = " << b << endl;
	
	
	return 0;
}
