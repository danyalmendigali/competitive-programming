#include <iostream>
using namespace std;

// ��������� ���� 1;

int main()
{
	setlocale(LC_ALL, "Russian");
	const int SizeOfArray = 5000;
	int arrWithDigits[SizeOfArray] = {};
	cout << "������ ����� � ������ " << sizeof(arrWithDigits) << " ����" << endl;
	
	int amount = 0;
	cout << "������� ����� �� ������  � ������?";
	cin >> amount;
	cout << "������� ���������� " << amount * sizeof(int) << " ����" << endl;
	
	for(int i = 0; i < amount; i++)
	{
		cout << i + 1 << "-� ����� :";
		cin >> arrWithDigits[i];
	}
	cout << endl;
	
   for(int i = 0; i < amount; i++)
	{
		
	   cout  << arrWithDigits[i] << ' ';
	}
	cout << endl;
	return 0;
}
