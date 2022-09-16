// IdentifyPlayingCards.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>
using namespace std;

int main()
{
    string userCard, userSuit;
    cout << "Enter a card value 2-10, or J, Q, K, A followed by a space and then the first letter of its suit. Use capitalization.\n(Example: 5 C for 5 of Clubs)\n";
    cin >> userCard >> userSuit;
    cout << "\n";

    //First checks that both inputs meet the criteria. Program ends if combination is invalid.
    //If both inputs are valid, the number/face is printed.
    if ((userCard == "2" || userCard == "3" || userCard == "4" || userCard == "5" || userCard == "6" || userCard == "7" || userCard == "8" || userCard == "9" || userCard == "10") && (userSuit == "H" || userSuit == "D" || userSuit == "C" || userSuit == "S")) {
        cout << userCard << " of ";
    }
    else if ((userCard == "J") && (userSuit == "H" || userSuit == "D" || userSuit == "C" || userSuit == "S")) {
        cout << "Jack of ";
    }
    else if ((userCard == "A") && (userSuit == "H" || userSuit == "D" || userSuit == "C" || userSuit == "S")) {
        cout << "Ace of ";
    }
    else if ((userCard == "Q") && (userSuit == "H" || userSuit == "D" || userSuit == "C" || userSuit == "S")) {
        cout << "Queen of ";
    }
    else if ((userCard == "K") && (userSuit == "H" || userSuit == "D" || userSuit == "C" || userSuit == "S")) {
        cout << "King of ";
    }
    else {
        cout << "Input error. Please read instructions carefully.\n";
        return 0;
    }

    //Then the suit is identified and printed.
    if (userSuit == "H") {
        cout << "Hearts";
    }
    else if (userSuit == "D") {
        cout << "Diamonds";
    }
    else if (userSuit == "C") {
        cout << "Clubs";
    }
    else if (userSuit == "S") {
        cout << "Spades";
    }
    else {
        return 0;
    }

    cout << "\n";

    return 0;
}
