#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int r, c, a[100][100] , b[100][100], sum[100][100];
	cout << "������� ���������� ������ (1-100) : ";
	cin >> r;
	
	cout << "������� ���������� ������� (1-100) : ";
	cin >> c;
	cout << endl << "������� �������� ������ �������: " << endl;
	
	for(int i = 0; i < r; i++) {
		for(int j = 0; j < c; j++) {
			cout << "������� �������� a" << i + 1 << j + 1 << " : ";
			cin >> a[i][j];
		}
	}
	
	
	cout << endl << "������� �������� ������ �������: " << endl;
	
	for(int i = 0; i < r; i++) {
		for(int j = 0; j < c; j++) {
			cout << "������� �������� b" << i + 1 << j + 1 << " : ";
			cin >> b[i][j];
		}
	}  
	
	
	for(int i = 0; i < r; i++) {
		for(int j = 0; j < c; j++) {
			sum[i][j] = a[i][j] + a[i][j];
		}
	}
	
	cout << "����� ���� ������: " << endl;
	for(int i = 0; i < r; i++) {
		for(int j = 0; j < c; j++) {
			cout << sum[i][j] << " ";
		}
		cout << endl;
	}
	
	
	
	
	
	
	return 0;
}
