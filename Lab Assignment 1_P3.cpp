//Yusuf GÜRDAL
//15.10.2021
//LabAssignment P!

#include<iostream>
using namespace std;

int main()
{
	int x, y;
	float top, fark, bölüm, çarpým;
	cout << "Please enter two integers:" << endl;
	cin >> x >> y;
	top = x + y;
	fark = x - y;
	çarpým = x * y;
	bölüm = float(x) / float(y);
	cout << x << "+" << y << "=" << top << endl;
	cout << x << "-" << y << "=" << fark << endl;
	cout << x << "/" << y << "=" << bölüm << endl;
	cout << x << "*" << y << "=" << çarpým;
}