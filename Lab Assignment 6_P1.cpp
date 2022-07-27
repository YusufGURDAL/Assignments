//Yusuf GÜRDAL
//1306210053

#include<iostream>
using namespace std;

int sum(int, int), product(int, int), difference(int, int);
float quotient(int, int);
int x, y;

int main() {
	cout << "Please enter two integers: " << endl;
	cin >> x >> y;
	if (y == 0)
		do {
			cout << "Real numbers can't divide by 0. Please enter two integers: " << endl;
			cin >> x >> y;
		} while (y == 0);
		cout << x << " + " << y << " = " << sum(x, y) << endl;
		cout << x << " - " << y << " = " << difference(x, y) << endl;
		cout << x << " * " << y << " = " << product(x, y) << endl;
		cout << x << " / " << y << " = " << quotient(x, y) << endl;
}

int sum(int x, int y) {
	return x + y;
}

int difference(int x, int y) {
	return x - y;
}

int product(int x, int y) {
	return x * y;
}

float quotient(int x, int y) {
	return float(x) / float(y);
}