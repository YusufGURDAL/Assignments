//Yusuf GÜRDAL
//15.10.2021
//LabAssignment P!

#include<iostream>
using namespace std;

int main()
{
	string name;
	string surname;
	int age;
	int now;
	int bd;
	now = 2021;
	cout << "Please write your name, surname, and your age.\n";
	cin >> name >> surname >> age;
	bd = now - age;
	cout << "\nHi " << name << " " << surname << "\nYour birth year is " << bd << ".";
}
