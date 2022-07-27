//Yusuf GÜRDAL
//1306210053


#include<iostream>
using namespace std;

int main() 
{
	int choice;
	int x, y;
	do {
		cout << "\t****MY MENU****" << endl << "1.Addition\n2.Substraction\n3.Division\n4.Multiplication\n5.Modulo\n6.Exit\n";
		cout << "Enter your choice:";
		cin >> choice;
		if (choice > 0 && choice < 6) {
			cout << "Enter two integers:";
			cin >> x >> y;
			switch (choice)
			{
			case 1:
				cout << x << "+" << y << "=" << x + y << endl;
				break;
			case 2:
				cout << x << "-" << y << "=" << x - y << endl;
				break;
			case 3:
				cout << x << "/" << y << "=" << float(x) / float(y) << endl;
				break;
			case 4:
				cout << x << "*" << y << "=" << x * y << endl;
				break;
			case 5:
				cout << x << "%" << y << "=" << x % y << endl;
				break;
			}
		}
		else if (choice != 6) {
			cout << "Invalid choice!" << endl; 
		}
	} while (choice != 6);
}