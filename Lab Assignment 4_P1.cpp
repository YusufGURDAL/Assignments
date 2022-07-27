//Yusuf GÜRDAL
//1306210053

#include <iostream>

using namespace std;

int main() {
    int x, y, lines;
    cout << "Please enter number of lines: ";
    cin >> lines;
    cout << "\n";
    for (x = 0; x < lines; x++)
    {
        for (y = 0; y < lines; y++)
        {
            if (lines % 2 == 0) {
                if (y > x - 2 && y < lines - x && x % 2 == (lines & 1))
                    cout << "x";
                else if (y < x - 1 && y < lines - x && y % 2 == (lines & 1))
                    cout << "x";
                else if (y > lines - x - 1 && y > x && y % 2 == ((lines + 1) & 1))
                    cout << "x";
                else if (y < x + 1 && y > lines - x - 1 && x % 2 == ((lines + 1) & 1))
                    cout << "x";
                else
                    cout << " ";
            }
            else {
                if (y > x - 2 && y < lines - x && x % 2 == 0)
                    cout << "x";
                else if (y < x - 1 && y < lines - x && y % 2 == 0)
                    cout << "x";
                else if (y > lines - x - 1 && y > x && y % 2 == 0)
                    cout << "x";
                else if (y < x + 1 && y > lines - x - 1 && x % 2 == 0)
                    cout << "x";
                else
                    cout << " ";
            }
        }cout << endl;
    }
}