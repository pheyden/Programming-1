// LetterGrade.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>
using namespace std;

int main()
{
    string letterGrade;
    string grade1 = "A+";
    string grade2 = "A";
    string grade3 = "A-";
    string grade4 = "B+";
    string grade5 = "B";
    string grade6 = "B-";
    string grade7 = "C+";
    string grade8 = "C";
    string grade9 = "C-";
    string grade10 = "D+";
    string grade11 = "D";
    string grade12 = "D-";
    string grade13 = "F";
    cout << "Enter your letter grade (please capitalize): ";
    cin >> letterGrade;
    if (letterGrade == grade1) {
        cout << "\nScore is 4.0";
    }
    else if (letterGrade == grade2) {
        cout << "\nScore is 3.7";
        }
    else if (letterGrade == grade3) {
        cout << "\nScore is 3.4";
    }
    else if (letterGrade == grade4) {
        cout << "\nScore is 3.0";
    }
    else if (letterGrade == grade5) {
        cout << "\nScore is 2.7";
    }
    else if (letterGrade == grade6) {
        cout << "\nScore is 2.4";
    }
    else if (letterGrade == grade7) {
        cout << "\nScore is 2.0";
    }
    else if (letterGrade == grade8) {
        cout << "\nScore is 1.7";
    }
    else if (letterGrade == grade9) {
        cout << "\nScore is 1.4";
    }
    else if (letterGrade == grade10) {
        cout << "\nScore is 1.0";
    }
    else if (letterGrade == grade11) {
        cout << "\nScore is 0.7";
    }
    else if (letterGrade == grade12) {
        cout << "\nScore is 0.4";
    }
    else if (letterGrade == grade13) {
        cout << "\nScore is 0";
    }
    else {
        cout << "Bad Input.";
    }

    return 0;
    
}

