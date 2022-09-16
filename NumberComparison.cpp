// NumberComparison.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;

    cout << "Enter three numbers, separated by spaces: ";
    cin >> num1 >> num2 >> num3;

    if (num1 == num2 && num2 == num3) {
        cout << "All same.";
    }
    else if (num1 != num2 && num2 != num3 && num1 != num3) {
        cout << "All different.";
    }
    else {
        cout << "Neither.";
    }
    return 0;
}
