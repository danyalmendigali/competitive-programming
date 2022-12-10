#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "������� ���������� ��������� � ������� : ";
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) {
		cout << "������� " << i + 1 << " �������: ";
		cin >> arr[i];
	}
	
	sort(arr, arr + n);
	int key;
	cout << "������� ���� : ";
	cin >> key;
	
	int l = 0;
	int r = n;
	int mid;
	
	while(l < r) {
		mid = (l + r) / 2;
		
		if(arr[mid] > key) r = mid;
		else l = mid + 1;
	}
	
	r--;
	if(arr[r] == key) cout << "������ �������� " << key << " � ������� �����: " << r; 
	else cout << "��������, �� ������ �������� � ������� ���";
	
	
	
	
	
	return 0;
}
