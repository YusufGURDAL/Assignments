//Yusuf G�RDAL
//15.10.2021
//LabAssignment P!

#include<iostream>
using namespace std;

int main()
{
	int x, y;
	float top, fark, b�l�m, �arp�m;
	cout << "Please enter two integers:" << endl;
	cin >> x >> y;
	top = x + y;
	fark = x - y;
	�arp�m = x * y;
	b�l�m = float(x) / float(y);
	cout << x << "+" << y << "=" << top << endl;
	cout << x << "-" << y << "=" << fark << endl;
	cout << x << "/" << y << "=" << b�l�m << endl;
	cout << x << "*" << y << "=" << �arp�m;
}