#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	int value = 5;
	int *ptr = &value; // �������������� ptr ������� �������� ����������
	
	cout << &value << "\n"; // ������� ����� �������� ���������� value
	cout << ptr << "\n"; // ������� �����, ������� ������ ptr
	
	
	
	return 0;
}
