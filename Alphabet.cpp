// Alphabet.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>
using namespace std;

int main()
{
    string input;
    string vowel1 = "a";
    string vowel2 = "e";
    string vowel3 = "i";
    string vowel4 = "o";
    string vowel5 = "u";
    string vowel6 = "A";
    string vowel7 = "E";
    string vowel8 = "I";
    string vowel9 = "O";
    string vowel10 = "U";

    cout << "Please enter a single alphabetic character: ";
    cin >> input;
    int size = input.size();

    if (size == 1) {
        if (input == vowel1 || input == vowel2 || input == vowel3 || input == vowel4 || input == vowel5 || input == vowel6 || input == vowel7 || input == vowel8 || input == vowel9 || input == vowel10) {
            cout << "Vowel.";
        }
        else {
            cout << "Consonant.";
        }
    }
    else {
        cout << "Error.";
    }

    return 0;
}

