//Yusuf GÜRDAL
//1306210053

#include <iostream>
using namespace std;

class Box {
private:
    double length, width, height;
public:
    Box() {
        cout << "Box is created by default constuctor!" << endl;
    }
    Box(double w1, double h1, double l1) {
        setLength(l1);
        setWidth(w1);
        setHeight(h1);
        cout << "Box is created by parameterized constructor!\nVolume of the box is : " << w1 * l1 * h1 << endl;
    }
    ~Box() {
        cout << "Box is destroyed by destructor" << endl;
    }
    double getLength() {
        return length;
    }
    double getWidth() {
        return width;
    }
    double getHeight() {
        return height;
    }
    void setLength(double l1) {
        length = l1;
    }
    void setWidth(double w1) {
        width = w1;
    }
    void setHeight(double h1) {
        height = h1;
    }
    double calculateVolume() {
        return length * width * height;
    }
};
int main() {
    double length, width, height;
    for (int counter = 0; counter < 10;++counter) {
        cout << "Please enter height, width, and length: ";
        cin >> height >> width >> length;
        if (counter % 2 == 0) {
            Box Box(width, height, length);
        }
        else {
            Box Box;
            Box.setHeight(height);
            Box.setLength(length);
            Box.setWidth(width);
            cout << "Volume of the box is : " << Box.calculateVolume() << endl;
        }
    }
}