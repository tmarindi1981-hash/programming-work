#include <iostream>
#include <string>
using namespace std;

class Shape {
protected:
    string color;

public:
    Shape(string c) {
        color = c;
        cout << "Shape constructor called for color: " << color << endl;
    }

    void displayColor() {
        cout << "Color: " << color << endl;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(string c, double r) : Shape(c) {
        radius = r;
        cout << "Circle constructor called for radius: " << radius << endl;
    }

    void displayCircleInfo() {
        cout << "Circle - Radius: " << radius << ", Color: " << color << endl;
    }
};

class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(string c, double w, double h) : Shape(c) {
        width = w;
        height = h;
        cout << "Rectangle constructor called" << endl;
    }

    void displayRectangleInfo() {
        cout << "Rectangle - Width: " << width << ", Height: " << height << ", Color: " << color << endl;
    }
};

int main() {
    cout << "--- Creating a Circle ---" << endl;
    Circle myCircle("Red", 5.0);
    myCircle.displayColor();
    myCircle.displayCircleInfo();

    cout << "\n--- Creating a Rectangle ---" << endl;
    Rectangle myRect("Blue", 4.0, 6.0);
    myRect.displayColor();
    myRect.displayRectangleInfo();

    return 0;
}
