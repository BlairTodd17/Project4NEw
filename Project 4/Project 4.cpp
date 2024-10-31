#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    if (year % 100 == 0) {
        return year % 400 == 0;
    }
    else {
        return year % 4 == 0;
    }
}

int daysInMonth(int month, int year) {
    switch (month) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        return 31;
    case 4: case 6: case 9: case 11:
        return 30;
    case 2:
        return isLeapYear(year) ? 29 : 28;
    default:
        return 0; 
    }
}

int main() {
    int month, year;

    cout << "Enter a month (1–12): ";
    cin >> month;
    while (month < 1 || month > 12) {
        cout << "Invalid month. Please enter a month between 1 and 12: ";
        cin >> month;
    }

    cout << "Enter a year: ";
    cin >> year;

    cout << daysInMonth(month, year) << " days\n";
    return 0;
}
