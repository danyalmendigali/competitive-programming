#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int year;
	cin >> year;
	if (year % 4 == 0  && year % 100 == 0 && year % 400 == 0) {
		cout << "����������";
	} 
	else cout  << " �� ����������";
	
	
	
	return 0;
}
