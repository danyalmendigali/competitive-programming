#include <iostream>
#include <queue>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int q[7];
	int start = 0, ends = 0;
	cout << "������������, ���������� ������� 7 �����: " << endl;
	
	for(int i = 0; i < 7; i++) {
		int a;
		cin >> a;
		q[ends++] = a;
	}
	
	cout << "����� ������ ������� � �������: " << q[start] << endl;
	start++;
	cout << "����� ������ �������(����� ��������) : " << q[start] << endl;
	cout << "����� ��������� ������� � ������� : " << q[ends - 1] << endl;
	if(start != ends) cout << "������� ��������� ! ";
	
	
	
	
	
	
	return 0;
}
