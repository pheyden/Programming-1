// DollarsToYen.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "Please enter the U.S. Dollar to Japanese Yen rate: ";
    float yenRate;
    cin >> yenRate;
    float exchange = 1;
    float dollars;

    while (exchange > 0) {
        dollars = 0;
        cout << "\nEnter a Dollar amount ";
        cin >> dollars;
        exchange = dollars * yenRate;
        cout << "You have " << exchange << " Yen!";
    }

}

