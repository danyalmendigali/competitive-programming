#include <iostream>
using namespace std;

int add(int a, int b) 
 {
	  return a + b;  
 }
	
int multiply(int c, int d)
 {
	return c * d;
 }

int main()
{
	cout << add(7, 8) << endl; // ������ ������� add(): a = 7, b = 8, ������ a + b = 15
	cout << multiply(4, 5) << endl; // ������ ������� multiply(): c = 4, d = 5, ������ c * d = 20
	
	 // �� ����� ���������� ����� ��������� � �������� ����������
	cout << add(2 + 3, 4 * 4) << endl; // ������ ������� add(): a = 5, b = 20, ������ a + b = 25
	
	 // �� ����� ���������� ���������� � �������� ����������
	x = 4;
	cout << add(x, x) << endl; // ����� 4 + 4
	
	cout << add(1, multiply (2, 3)) << endl;  // ����� 1 + (2 * 3)
	cout << add(1, add(2, 3)) << endl;  // ����� 1 + (2 + 3)
	
	
	return 0;
}
