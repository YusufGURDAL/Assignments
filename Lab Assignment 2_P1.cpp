#include<iostream>
using namespace std;

int main()
{
	int x, y, sum, diff, prod;
	float div;
	int sel;
	cout<<"enter 2 integers:"<<endl;
	cin >> x >> y;
	sum = x + y;
	diff = x - y;
	prod = x * y;
	div = float(x) / float(y);
	cout << "Please choose one of that operations:" << endl << "1-Addition" << endl << "2-Substraction" << endl << "3-Multiplication" << endl << "4-Division" << endl;
	cin >> sel;
	if (sel == 1)
		cout << "x+y=" << sum;
	if (sel == 2)
		cout << "x-y=" << diff;
	if (sel == 3)
		cout << "x*y=" << prod;
	if (sel == 4)
		cout << "x/y=" << div;
}