#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
    int a, b, i = 4, j= 4;
    
    cout << " �������� ���������� � ����� ������ :\n";
    cout << "i = " << i << "\n";
	cout << "j = " << j << "\n";
	
	cout << " �������� ���������� ����� ���������� n = i++ :  \n";
	a = i++;
	cout << "a = " << a << "\n";
	cout << "i = " << i << "\n";
	
	cout << " �������� ���������� ����� ���������� m = ++j:  \n";
	b = ++j;
	cout << "b = " << b << "\n";
	cout << "j = " << j << "\n";
	
	cout << " �������� ���������� ����� ���������� n = (--i) * (i--)\n";
	a = (--i) * (i--);
	cout << "a = " << a << "\n";
	cout << "i = " << i << "\n";
	
	cout << " �������� ���������� ����� ���������� m = (--j) * (--j)\n";
	b = (--j) * (--j);
	cout << "b = " << b << "\n";
	cout << "j = " << j << "\n";
	
	cout << " �������� ���������� ����� ���������� n = (--i) * (i++)\n";
	a =  (--i) * (i++);
	cout << "a = " << a << "\n";
	cout << "i = " << i << "\n";
	
	cout << " �������� ���������� ����� ���������� n = (j--) * (++j)\n";
	b =  (--i) * (i++);
	cout << "b = " << b << "\n";
	cout << "j = " << j << "\n";
	
	cout << " �������� ���������� ����� ���������� n = (--i) * (++j)\n";
	a =  (--i) * (++j);
	cout << "a = " << a << "\n";
	cout << "i = " << i<< "\n";
		
	return 0;
}
