#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "������� �����: ";
	int a;
	cin >> a;
	
	if(a > 15) 
	{
		cout << "�� ����� ����� :" << a << "\n" ;
		cout << a << ">" <<  "15\n";
	}
	

	else 
	{
	   cout << "�� ����� ����� : " << a << "\n" ;
	   cout << a << " ��� ����� ������ 15\n";	
	}
	
	
	return 0;
}

