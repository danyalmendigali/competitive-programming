#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n][n], mass[n][n];
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	cout << endl;
	
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cout << arr[j][i] << " ";
		}
		cout << endl;
	}
	
	
	
	
	
	
	return 0;
}
