// Easter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int y = 0;

    while (y <= 0) {
        cout << "Enter a year: ";
        cin >> y;
        if (y <= 0) {
            cout << "\nInvalid entry. Try again.\n\n";
        }
    }

    int a = y % 19;
    int b = y / 100;
    int c = y % 100;
    int d = b / 4;
    int e = b % 4;
    int g = ((8 * b) + 13) / 25;
    int h = ((19 * a) + b - d - g + 15) % 30;
    int j = c / 4;
    int k = c % 4;
    int m = (a + (11 * h)) / 319;
    int r = ((2 * e) + (2 * j) - k - h + m + 32) % 7;
    int n = (h - m + r + 90) / 25;
    int p = (h - m + r + n + 19) % 32;

    if (y > 2022) {
        cout << "\nEaster will be on " << n << "/" << p << endl;
    } else {
        cout << "\nEaster fell on " << n << "/" << p << endl;
    }

    return 0;
}
