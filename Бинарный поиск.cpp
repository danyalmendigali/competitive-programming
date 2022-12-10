#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "������� �����(���������� ����� � �������): ";
	cin >> n;
	int arr[n]; // ������� ������ �� n ���������
	cout << "�������  ������ � " << n << " ���������: " << endl;
	for(int i = 0; i < n; i++) {
		cout << "������� " << i + 1 << " ������� : ";
		cin >> arr[i]; // ��������� �������� �������
	} 
	sort(arr, arr + n); // ��������� � ������� ������� sort (������� ����������)
	int key; // ������� ���������� � ������� ����� ���������� ����
	cout << "������� ����: ";
	cin >> key; // ��������� ����
	
	bool flag = false;
	int l = 0; // ����� �������
	int r = n - 1; // ������ �������
	int mid;
	
	while((l <= r) && (flag != true)) {
		mid =(l + r) / 2; // ��������� ��������� ������ ������� [l,r]
		
		if(arr[mid] == key) flag = true; //��������� ���� �� ���������� ���������
		if(arr[mid] > key) r = mid - 1; // ���������, ����� ����� ����� ���������
		else l = mid + 1;
	}
	
	if(flag) cout << "������ �������� " << key << " � ������� �����: " << mid;
	else cout << "��������, �� ������ �������� ���� ";
	
	
	return 0;
}
