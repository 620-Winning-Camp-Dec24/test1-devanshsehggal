#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual void calculateArea() = 0; 
    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    void calculateArea() override {
        double area = M_PI * radius * radius;
        cout << "The area of the circle is: " << area << endl;
    }
};

class Rectangle : public Shape {
private:
    double length, breadth;

public:
    Rectangle(double l, double b) : length(l), breadth(b) {}

    void calculateArea() override {
        double area = length * breadth;
        cout << "The area of the rectangle is: " << area << endl;
    }
};

class Triangle : public Shape {
private:
    double base, height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    void calculateArea() override {
        double area = 0.5 * base * height;
        cout << "The area of the triangle is: " << area << endl;
    }
};

int main() {
    int choice;
    cout << "Choose a shape to calculate the area:\n";
    cout << "1. Circle\n2. Rectangle\n3. Triangle\n";
    cin >> choice;

    Shape* shape = nullptr;

    switch (choice) {
    case 1: {
        double radius;
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        shape = new Circle(radius);
        break;
    }
    case 2: {
        double length, breadth;
        cout << "Enter the length and breadth of the rectangle: ";
        cin >> length >> breadth;
        shape = new Rectangle(length, breadth);
        break;
    }
    case 3: {
        double base, height;
        cout << "Enter the base and height of the triangle: ";
        cin >> base >> height;
        shape = new Triangle(base, height);
        break;
    }
    default:
        cout << "Invalid choice." << endl;
        return 1;
    }

    if (shape) {
        shape->calculateArea();
        delete shape;
    }

    return 0;
}
