#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int a[10][10], b[10][10], mult[10][10] , r1, c1, r2, c2, k;
	
	cout << "�-�� ����� � �������  ������ �������: ";
	cin >> r1 >> c1;
	cout << "�-�� ����� � ������� ������ �������: ";
	cin >> r2 >> c2;
	
	while(c1 != r2)
	{
		cout << "������! ���-�� ������� ������ ������� �� ����� ���������� ����� ������.";
		
		cout << "�-�� ����� � ������� ������ �������: ";
		cin >> r1 >> c1;
		
		cout << "�-�� ����� � ������� ������ �������: ";
	    cin >> r2 >> c2;
		
	}
	
	
	
	cout << "������� �������� ������� 1: " << endl;
	for(int i = 0; i < r1; i++) {
		for(int j = 0; j < c1; j++) {
			cout << "������ ������� �: " << i + 1 << j + 1 << ":";
			cin >> a[i][j];
		}
	}
	
	
	
	cout << "������� �������� ������� 2: " << endl;
	for(int i = 0; i < r2; i++) {
		for(int j = 0; j < c2; j++) {
			cout << "������ ������� b: " << i + 1 << j + 1 << ":";
			cin >> b[i][j];
		}
	}
	
	
	for(int i = 0; i < r1; i++) {
		for(int j = 0; j < c2; j++) {
			mult[i][j] = 0;
		}
	}
	
	
	for(int i = 0; i < r2; i++) {
		for(int j = 0; j < c2; j++) {
			for(k = 0; k < c1; k++) {
				mult[i][j] = a[i][j] * b[k][j]; 
			}
		}
	}
	
	
	cout << endl << "��������� ��������� ������ : " << endl;
	for(int i = 0; i < r1; i++) {
		for(int j = 0; j < c2; j++) {
			cout << " " << mult[i][j];
			if(j == c2 - 1) {
				cout << endl;
			}
		}
	}
	cout << endl;
	

	
	
	return 0;
}
