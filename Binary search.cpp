#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "������� ���������� ����� � ������� : ";
	cin >> n;
	int arr[n];
	cout << "������� " << n << " �����" << endl ; 
	for(int i = 0; i < n; i++) {
		cout << "������� " << i + 1 << " ������� : "; 
		cin >> arr[i];
	}
	
	sort(arr, arr + n);
	int key;
	cin >> key;
	cout << binary_search(arr, arr + n, key);
	
	
	
	
	
	return 0;
}
