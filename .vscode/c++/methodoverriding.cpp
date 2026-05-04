#include <iostream>
using namespace std;

class Shape {
protected:
    double x, y;

public:
    void input() {
        cout << "Enter two values: ";
        cin >> x >> y;
    }

    virtual void computeArea() {
        cout << "Area not defined for base class." << endl;
    }
};

// Derived class Triangle
class Triangle : public Shape {
public:
    void computeArea() {
        double area = 0.5 * x * y;
        cout << "Area of Triangle = " << area << endl;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
public:
    void computeArea() {
        double area = x * y;
        cout << "Area of Rectangle = " << area << endl;
    }
};

// Main function
int main() {
    Shape *ptr;

    Triangle t;
    Rectangle r;

    cout << "\nTriangle:" << endl;
    t.input();
    ptr = &t;
    ptr->computeArea();

    cout << "\nRectangle:" << endl;
    r.input();
    ptr = &r;
    ptr->computeArea();

    return 0;
}
