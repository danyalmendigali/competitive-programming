#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n, sum = 1;
	cout << "������� ������������� ����� �����:";
	cin >> n;
	
	for(int i = 1; i <= n; i++) {
	   sum += 1 ;
}
	cout << "����� =" << sum << endl;
	
	
	
	
	return 0;
}
