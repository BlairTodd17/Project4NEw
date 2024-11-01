#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int choice;
    double area = 0;

    do {
        cout << "Geometry Calculator\n"
            << "1. Calculate the Area of a Circle\n"
            << "2. Calculate the Area of a Rectangle\n"
            << "3. Calculate the Area of a Triangle\n"
            << "4. Quit\n"
            << "Enter your choice (1–4): ";
        cin >> choice;

        if (choice == 1) {
            double radius;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            if (radius > 0) {
                area = 3.14159 * pow(radius, 2);
                cout << "Area of the circle: " << area << endl;
            }
            else {
                cout << "Invalid radius.\n";
            }
        }
        else if (choice == 2) {
            double length, width;
            cout << "Enter length and width of the rectangle: ";
            cin >> length >> width;
            if (length > 0 && width > 0) {
                area = length * width;
                cout << "Area of the rectangle: " << area << endl;
            }
            else {
                cout << "Invalid length or width.\n";
            }
        }
        else if (choice == 3) {
            double base, height;
            cout << "Enter base and height of the triangle: ";
            cin >> base >> height;
            if (base > 0 && height > 0) {
                area = 0.5 * base * height;
                cout << "Area of the triangle: " << area << endl;
            }
            else {
                cout << "Invalid base or height.\n";
            }
        }
        else if (choice != 4) {
            cout << "Invalid choice. Please choose between 1 and 4.\n";
        }
    } while (choice != 4);

    cout << "Program terminated.\n";
    return 0;
}
