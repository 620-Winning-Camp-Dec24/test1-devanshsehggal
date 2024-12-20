#include <iostream>
#include <cmath>  

using namespace std;

double area(double radius) {
    return M_PI * radius * radius;
}

double area(double length, double breadth) {
    return length * breadth;
}

double area(double base, double height) {
    return 0.5 * base * height;
}

int main() {
    int choice;
    cout << "Select the shape to calculate the area:\n";
    cout << "1. Circle\n2. Rectangle\n3. Triangle\n";
    cout << "Enter your choice (1/2/3): ";
    cin >> choice;

    if (choice == 1) {
        double radius;
        cout << "Enter radius of the circle: ";

        cin >> radius;
        cout << "Area of the circle = " << area(radius) << endl;
    }
    else if (choice == 2) {
        double length, breadth;
        cout << "Enter length and breadth of the rectangle: ";
        cin >> length >> breadth;
        cout << "Area of the rectangle = " << area(length, breadth) << endl;
    }
    else if (choice == 3) {
        double base, height;
        cout << "Enter base and height of the triangle: ";
        cin >> base >> height;
        cout << "Area of the triangle = " << area(base, height) << endl;
    }
    else {
        cout << "Invalid choice!" << endl;
    }
    return 0;
}