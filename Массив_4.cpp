#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int m[100];
	int i, n, sum = 0 ;
	cout << "������� ���������� ��������� ������� (1-1000)" << ' ';
	cin >> n;
	while (n > 1000 || n <= 0 ) {
		cout << "������� ����� ������";
		cin  >> n;
	}
	for(i = 0; i < n; i++)
	{
		cout << i + 1 << ' ' << "������� ������� ������� : ";
		cin >> m[i];
		sum = sum + m[i];
	
	}
	  cout  << "����� ���� ����� ������� = "<< sum;
	
	
	
	
	
	return 0;
}
