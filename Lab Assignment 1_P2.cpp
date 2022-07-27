//Yusuf GÜRDAL
//15.10.2021
//LabAssignment P!

#include<iostream>
using namespace std;

int main()
{
	int F;
	float C, K;
	cout << "Please enter a temperature value(Fahrenheit):";
	cin >> F;
	C = (float(F) - 32) * 5 / 9;
	K = C + 273.15;
	cout << "Conversion result: " << F << " Fahrenheit = " << C << " Celcius = " << K << " Kelvin";
}