// discount.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int rentals, referrals, total, max;
    max = 75;
    cout << "Enter number of rentals: ";
    cin >> rentals;
    cout << "\nEnter number of referrals: ";
    cin >> referrals;
    total = rentals + referrals;
    cout << "\nMember discount = " << min(total, max) << "%\n";

    return 0;
}
