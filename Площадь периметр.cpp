#include <iostream>
using namespace std;

int main()
{
	setlocale (LC_ALL, "Russian");
	int a , b , p , s;
	cout << "������� ������ : ";
	cin >> a;
	
	cout << "������� ������  : ";
	cin >> b;
	
	p = a * 2 + b * 2;
	s = a * b;
	cout << " �������� " <<  p <<  endl;
	
	cout << " ������� " << s <<  endl;

	
	
	return 0;
}
