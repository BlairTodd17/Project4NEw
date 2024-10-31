#include <iostream>
using namespace std;

double calculateCharge(double weight, int distance) {
    double rate;
    if (weight <= 2) {
        rate = 1.10;
    }
    else if (weight <= 6) {
        rate = 2.20;
    }
    else if (weight <= 10) {
        rate = 3.70;
    }
    else {
        rate = 4.80;
    }

    return rate * (distance / 500.0);
}

int main() {
    double weight;
    int distance;

    cout << "Enter the weight of the package (kg): ";
    cin >> weight;
    while (weight <= 0 || weight > 20) {
        cout << "Invalid weight. Enter a weight between 0 and 20 kg: ";
        cin >> weight;
    }

    cout << "Enter the distance to be shipped (miles): ";
    cin >> distance;
    while (distance < 10 || distance > 3000) {
        cout << "Invalid distance. Enter a distance between 10 and 3000 miles: ";
        cin >> distance;
    }

    cout << "The shipping charge is $" << calculateCharge(weight, distance) << endl;
    return 0;
}
