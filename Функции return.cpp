#include <iostream>
using namespace std;


// int ��������, ��� ������� ���������� ������������� �������� ������� � caller
int return7()
{
	
	// ��� ������� ���������� ������������� ��������, ������� �� ������ ������������ �������� return
	return 7; // ���������� ����� 7 ������� � caller;
}

int main()
{
	cout << return7() << endl; // ��������� 7
	cout << return7() + 3 << endl; // ��������� 10
	
	return7();  // ���������� ����� 7
	
	
	
	
	return 0;
}
