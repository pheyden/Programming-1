// AverageMinMaxRange.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    float num1, num2, num3;
    cout << "Enter 3 decimal numbers separated by spaces: ";
    cin >> num1 >> num2 >> num3;

    float average = (num1 + num2 + num3) / 3;
    cout << "\nAverage: " << average;

    float max1, max2;
    max1 = max(num1, num2);
    max2 = max(num3, max1);
    cout << "\nLargest number is " << max2;

    float min1, min2;
    min1 = min(num1, num2);
    min2 = min(num3, min1);
    cout << "\nSmallest number is " << min2;

    float range = max2 - min2;
    cout << endl << "Range is " << range << endl;

    return 0;
    
}

