//Yusuf GÜRDAL
//1306210053

#include<iostream>
using namespace std;

int dd, mm, yyyy;
int a, b, c;
int gün(int &);
int ay(int &);
int yıl(int &);
bool r,t;

int main() {
	cout << "Please enter your birthday:" << endl;
	cin >> dd >> mm >> yyyy;
	if (mm < 1 || mm > 12)
		cout << "ERROR!";
	else if (((mm < 7 && mm % 2 == 0) || (mm > 8 && mm % 2 == 1)) && (dd < 0 || dd > 30))
		cout << "ERROR!";
	else if (((mm < 8 && mm % 2 == 1 && mm != 02) || (mm > 7 && mm % 2 == 0)) && (dd < 0 || dd > 31))
		cout << "ERROR!";
	else if ((mm == 02) && (dd < 0 || dd > 28) && yyyy % 4 != 0)
		cout << "ERROR!";
	else if ((c % 4 == 0) && (a < 0 || a > 29))
		cout << "ERROR!";
	else if (yyyy < 0)
		cout << "ERROR!";
	else
		t = true;
	if (t) {
		cout << "Please enter today's date:" << endl;
		cin >> a >> b >> c;
		if (b < 0 || b > 12)
			cout << "ERROR!";
		else if (((b < 7 && b % 2 == 0) || (b > 8 && b % 2 == 1)) && (a < 0 || a > 31))
			cout << "ERROR!";
		else if (((b < 8 && b % 2 == 1 && b != 02) || (b > 7 && b % 2 == 0)) && (a < 0 || a > 30))
			cout << "ERROR!";
		else if ((b == 02) && (a < 0 || a > 28) && c % 4 != 0)
			cout << "ERROR!";
		else if ((c % 4 == 0) && (a < 0 || a > 29))
			cout << "ERROR!";
		else if (c < 0)
			cout << "ERROR!";
		else
			r = true;
	}
	if (r)
		cout << "Your age is: " << yıl(c) << " years " << ay(b) << " months " << gün(a) << " days";
}

int gün(int &a) {
	int x;
	if (b < 7 && b % 2 == 0) {
		if (a >= dd) {
			x = a - dd;
		}
		else
			x = 31 - (dd - a);
	}
	else if (b > 8 && b % 2 == 1) {
		if (a >= dd) {
			x = a - dd;
		}
		else
			x = 31 - (dd - a);
	}
	else if (b < 8 && b % 2 == 1 && b != 03) {
		if (a >= dd) {
			x = a - dd;
		}
		else
			x = 30 - (dd - a);
	}
	else if (b == 03) {
		if (a >= dd) 
			x = a - dd;
		else if (c % 4 != 0)
			x = 28 - (dd - a);
		else if (c % 4 == 0)
			x = 29 - (dd - a);
	}
	else if (b > 7 && b % 2 == 0) {
		if (a >= dd) {
			x = a - dd;
		}
		else
			x = 30 - (dd - a);
	}
	return x;
}

int ay(int &b) {
	int y;
	if (yyyy == c) {
		if ((b - mm == 1 && a < dd) || b - mm == 0)
			y = 0;
		else if (b > mm)
			y = b - mm;
	}
	else if (b > mm)
		y = b - mm;
	else if (b < mm && a < dd)
		y = 12 - (mm - b) - 1;
	else if (b < mm && a >= dd)
		y = 12 - (mm - b);
	else if (b = mm && a < dd)
		y = 11;
	else if (b = mm && a >= dd)
		y = 0;
	return y;
}

int yıl(int& c) {
	int z;
	if (b < mm || (mm - b == 0 && a < dd))
		z = c - yyyy - 1;
	else 
		z = c - yyyy;
	return z;
}