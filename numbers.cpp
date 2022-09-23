// numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <algorithm>
#include <iostream>
using namespace std;

int main()
{

    //Part 1 prompts, then accepts the input and gives the minimum.
    cout << "Enter 6 numbers separated by spaces. ";
    int num1, num2, num3, num4, num5, num6;
    cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6;
    int min1, min2, min3, min4, min5;
    min1 = min(num1, num2);
    min2 = min(num3, num4);
    min3 = min(num5, num6);
    min4 = min(min1, min2);
    min5 = min(min3, min4);
    cout << "\n\nSmallest number is " << min5;

    //Part 2 gives the maximum.
    int max1, max2, max3, max4, max5;
    max1 = max(num1, num2);
    max2 = max(num3, num4);
    max3 = max(num5, num6);
    max4 = max(max1, max2);
    max5 = max(max3, max4);
    cout << "\n\nLargest number is " << max5;

    //Part 3 gives the cumulative totals.
    int total;
    cout << "\n\nCumulative totals are ";
    total = num1;
    cout << total << " ";
    total += num2;
    cout << total << " ";
    total += num3;
    cout << total << " ";
    total += num4;
    cout << total << " ";
    total += num5;
    cout << total << " ";
    total += num6;
    cout << total << " ";

    //Part 4 looks for adjacent duplicates.
    //It also makes sure that if the user were to enter something like "2 2 2" it would only print a single "2".
    cout << "\n\nAdjacent duplicates ";
    if (num1 == num2) {
        cout << num1 << " ";
    }
    if ((num2 == num3) && (num3 != num1)) {
        cout << num2 << " ";
    }
    if ((num3 == num4) && (num4 != num2)) {
        cout << num3 << " ";
    }
    if ((num4 == num5) && (num5 != num3)) {
        cout << num4 << " ";
    }
    if ((num5 == num6) && (num6 != num4)) {
        cout << num5 << " ";
    }

    cout << "\n\n";
    return 0;

}

