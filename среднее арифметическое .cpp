#include <iostream>
using namespace std;

int main()
{
	setlocale (LC_ALL, "Russian");
    int    a , b , c , d;
	
	cout << "������� ������ ����� :";
     cin >> a;
	
	cout << "������� ������ ����� : ";
	 cin >> b;
	
	cout << "������� ������ ����� : ";
	 cin >> c;
	 
	 d =  ((a + b + c) / 3);
	 
	 cout << "������� �������������� : "  << d << endl;
	
	
	
	return 0;
}
