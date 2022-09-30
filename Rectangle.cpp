// rectangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
    float side1, side2;

    std::cout << "Enter the length of two sides of a rectangle, separated by a space: ";
    cin >> side1 >> side2;
    cout << "\nArea = " << side1 * side2;
    cout << "\nPerimeter = " << (side1 * 2) + (side2 * 2);
    cout << "\nDiagonal = " << sqrt((side1 * 2) + (side2 * 2)) << '\n';

    return 0;
}
