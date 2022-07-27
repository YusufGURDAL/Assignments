//Yusuf GÜRDAL
//1306210053

#include<iostream>
using namespace std;

int main() {
	cout << "Please enter number of lines: ";
	int lines;
	cin >> lines;
	for (int i = 1;i <= lines;++i) {
		for (int j = lines;j > i;--j) {
			cout << "  ";
		}
		for (int k = 1;k <= i;++k) {
			cout << "*";
		}
		cout << endl;
	}
	for (int m = 1;m <= lines;++m) {
		for (int n = 0;n < m;++n) {
			cout << "  ";
		}
		for (int p = 1;p <= lines - m;++p) {
			cout << "*";
		}
		cout << endl;
	}
}