#include <iostream>
using namespace std;

int add(int x, int y); // ��������������� ���������� ������� add() (������������ � ��������)

int main()
{
	cout << "The sum of 3 and 4 is :" << add(3, 4) << endl; // ��� ��������, ��� ��� �� �������������� (���� ������� main()) �������� ������� add()
	
	return 0;
}

int add(int x, int y) // ���� ����������� ������� add() ��������� ���� � ������
{
	return x + y;
}
