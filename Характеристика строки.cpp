#include <iostream>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	string s;
	int space = 0, num = 0, smalleters = 0, bigletters = 0;
	getline(cin, s);
	for(int i = 0; i < s.size(); i++) {
		if(s[i] >= '0' && s[i] <= '9' ) {
			num++;
		}
		
		if(s[i] >= 'a' && s[i] <= 'z') {
			smalleters++;
		}
		
		if(s[i] >= 'A' && s[i] <= 'Z') {
			bigletters++;
		}
		
		if(s[i] == ' ') {
			space++;
		}
	}

	cout << "������� : " << space <<  endl;
	cout << "����� : " << num <<  endl;
	cout << "���������� ��������� ���� : " << smalleters <<  endl;
	cout << "���������� ������� ���� : " << bigletters <<  endl;
	
	
	
	
	return 0;
}
