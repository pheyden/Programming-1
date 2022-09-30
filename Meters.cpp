// meters.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
    double meters, miles, feet, inches;

    cout << "Enter a number of meters: ";

    cin >> meters;
    miles = meters * 0.00062139;
    feet = meters * 3.281;
    inches = meters * 39.37;

    cout << "\nMiles = " << miles << "\nFeet = " << feet << "\nInches = " << inches << '\n';

    return 0;
}

