#include<iostream>
using namespace std;

int main()
{
	char x;
	cout << "Enter a character:";
	cin >> x;
	if (64 < x && x < 91)
		cout << static_cast<char>(x + 32);
	else if (96 < x && x < 123)
		cout << static_cast<char>(x - 32);
	else
		cout << "It's not a letter.";
}