#include <iostream>
#include <queue>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	queue <int> q;
	cout << "������� ���������� ����� � ������� : ";
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		int a;
		cout << i + 1 << " �����: ";
 		cin >> a;
		q.push(a);
	}
	cout << endl;
	cout << "������ �����: " << q.front() << endl;
     q.pop();
     cout << "����� ������ ������� � ������� : " << q.front() << endl;
	 if(!q.empty()) {
	 	cout << "������� �� �����! ";
	 } 
	
	
	return 0;
}
