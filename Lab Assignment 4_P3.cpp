//Yusuf GÜRDAL
//1306210053

#include<iostream>
using namespace std;

int main() {
	string x = "   ******   ";
	string y = " ********** ";
	string z = "************";
    cout << "Please enter number of lines: ";
    int lines;
    cin >> lines;
    cout << "\n";
    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < 12; j++) {
            if ((i % 2) == 1 && (j % 11) == 0) {
                cout << " ";
            }
            else if ((i % 4) == 0 && (j % 9) == 0) {
                cout << " ";
            }
            else if ((i % 4) == 0 && (j % 9) == 1) {
                cout << " ";
            }
            else if ((i % 4) == 0 && (j % 9) == 2) {
                cout << " ";
            }
            else {
                cout << "*";
            }
        }
        cout << endl;
    }
    cout << endl;
}