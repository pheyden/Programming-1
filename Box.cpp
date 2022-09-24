// Box.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <algorithm>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //get words
    cout << "Please enter 3 words: " << endl;
    string word1, word2, word3;
    cin >> word1 >> word2 >> word3;

    //determine biggest word for spacing purposes
    int l1 = word1.length();
    int l2 = word2.length();
    int l3 = word3.length();
    int biggestWordLength = max(l1, l2);
    biggestWordLength = max(biggestWordLength, l3);
    int width = (biggestWordLength + 5);
    int padding1 = ((width - l1) / 2);
    int padding2 = ((width - l2) / 2);
    int padding3 = ((width - l3) / 2);
    int i;

    //put words inside box
    cout << "+" << setw(width) << setfill('-') << "+" << endl;
    cout << "|";
    for (i = 0; i < padding1; i++) {
        cout << " ";
    }
    cout << word1;
    for (i = 0; i < padding1; i++) {
        cout << " ";
    }
    cout << "|" << endl;
    cout << "|";
    for (i = 0; i < padding2; i++) {
        cout << " ";
    }
    cout << word2;
    for (i = 0; i < padding2; i++) {
        cout << " ";
    }
    cout << "|" << endl;
    cout << "|";
    for (i = 0; i < padding3; i++) {
        cout << " ";
    }
    cout << word3;
    for (i = 0; i < padding3; i++) {
        cout << " ";
    }
    cout << "|" << endl;
    cout << "+" << setw(width) << setfill('-') << "+" << endl;

    return 0;
}

