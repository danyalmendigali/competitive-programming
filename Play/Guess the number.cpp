#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int k;
	string s;
	cout << "������� ���� ��� : ";
	cin >> s;
	cout << "������ " << s << " ����� �������� � ���� " << endl;
	k = 1 + rand() % 100;
	cout << k << " ";
	setlocale(LC_ALL, "Russian");
	
	for(int i = 0; i < 7; i++) {
		int a;
		cout << i + 1 << " ������� : ";
 		cin >> a;
		if(a > k) {
			cout << "���������� ����� ������ " << endl;
		}
		if(a < k) {
			cout << "���������� ����� ������ " << endl;
		}
		if(a == k) {
			cout << "�� ������� �����! ";
			return 0;
		}
	}
	
	
	
	
	
	
	
	return 0;
}
