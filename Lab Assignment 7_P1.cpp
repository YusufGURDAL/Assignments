//Yusuf GÜRDAL
//1306210053

#include<iostream>
using namespace std;

bool prime();
int x;

int main() {
	cout << "Enter an integer:";
	cin >> x;
	if (prime())
		cout << x << " is a prime number.";
	else
		cout << x << " is not a prime number.";
}

bool prime() {
	for (int i = 2; i < x; i++) {
		if (x % i == 0)
			return 0;
	}
}