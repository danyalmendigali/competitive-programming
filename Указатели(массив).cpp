#include <iostream>
using namespace std;	

//  cout << pArr[i] << endl; == cout << (pArr + i) << endl;

// arr = ��������� �� ������ �������

// ���������� ��������� - ����� ������ ��������� ��������� ��������

int main()
{
	setlocale(LC_ALL, "Russian");
	
	const int SIZE = 5;
	
	int arr[SIZE]{4, 55, 79, 1, 4};
	
	 cout << *(arr + 102 ) << endl;
	
	
     
   
	
	
	
	return 0;
}
