// Compass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    double degrees;
    cout << "Enter a compass measurement in degrees: ";
    cin >> degrees;

    if (degrees >= 0 && degrees <= 22.5) {
        cout << "North";
    }
    else if (degrees > 22.5 && degrees < 67.5) {
        cout << "North East";
    }
    else if (degrees >= 67.5 && degrees <= 112.5) {
        cout << "East";
    }
    else if (degrees > 112.5 && degrees < 157.5) {
        cout << "South East";
    }
    else if (degrees >= 157.5 && degrees <= 202.5) {
        cout << "South";
    }
    else if (degrees > 202.5 && degrees < 247.5) {
        cout << "South West";
    }
    else if (degrees >= 247.5 && degrees <= 292.5) {
        cout << "West";
    }
    else if (degrees > 292.5 && degrees < 337.5) {
        cout << "North West";
    }
    else if (degrees >= 337.5 && degrees <= 360) {
        cout << "North";
    }
    else {
        cout << "Invalid input.";
    }
    return 0;
}

