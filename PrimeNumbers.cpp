// PrimeNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a positive number ";
    cin >> num;
    if (num == 0 || num == 1) {
        cout << "\nThere are no prime numbers less than " << num << ".";
        return 0;
    }
    int i = 2;
    cout << i << " ";
    int j;
    bool prime = false;
    while (i < num) {
        j = 0;
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                prime = false;
                break;
            }
            else {
                prime = true;
            }
        }
        if (prime) {
            cout << i << " ";
        }
        i++;
    }
}

