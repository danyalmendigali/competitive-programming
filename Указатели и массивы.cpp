#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int array[4] = {5, 8, 4, 11};
	
	// ������� �������� �������
	cout << "����� ������� :" << array << "\n";
	
	// ������� �������� �������� �������� �������
	cout << "����� ������� �������� :" << &array[0] << "\n";
	
	
	
	
	return 0;
}
