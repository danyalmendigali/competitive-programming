#include <iostream>
#include <queue> // �������
using namespace std;

int main() {
	queue <int> Queue;
	int n;  
	cin >> n;
	int arr[n][n]; // ������� ���������
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	
	
	int nodes[n]; // ������� �����
	for(int i = 0; i < n; i++) 
		nodes[i] = 0; // ������� ��� ������� ����� 0
	
	Queue.push(0); // �������� � ������� ������ �������
	while(!Queue.empty()) // ���� ������� �� �����
	{
		int node = Queue.front(); // ��������� �������
		Queue.pop();
		nodes[node] = 2; // �������� �� ��� ����������
		for(int j = 0; j < n; j++) { // ��������� ��� ��� ��� ������� �������
			if(arr[node][j] == 1 && nodes[j] == 0) { // ���� ������� ������� � �� ����������
				Queue.push(j); // ��������� �� � �������
				nodes[j] = 1; // �������� ������� ��� ������������
			}
		}
		cout << node + 1 << endl; // ������� ����� �������
	}
	cin.get();
	
	
	
	
	
	
	
	return 0;
}
