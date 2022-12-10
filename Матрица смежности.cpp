#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > adj;

int main() {
	queue <int> Queue;
	int n;
	cin >> n;
	adj.resize(n);
	for(int i = 0; i < adj.size(); i++) {
		for(int j = 0; j < n; j++) 
			adj[i].resize(n, 0);
	}
	int p;
	cin >> p;
	for(int i = 0; i < p; i++) {
		int x, y;
		cin >> x >> y;
		adj[x][y] = 1;
		adj[y][x] = 1;
	}
	
	/*
	for(int i = 0; i < adj.size(); i++) {
		for(int j = 0; j < adj[i].size(); j++) {
			cout << adj[i][j] << " ";
		}
		cout << "\n";
	}
	*/
	
	
	
	
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
