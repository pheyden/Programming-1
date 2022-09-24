// TicketSeller.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int availableTickets = 100;
    int buyers = 0;
    while (availableTickets > 0) {
        int purchase = 0;
        cout << "How many tickets would you like to purchase? (Can choose up to 4) ";
        cin >> purchase;
        if ((purchase > 0) && (purchase <= 4)) {
            availableTickets -= purchase;
            cout << "\nTickets remaining " << availableTickets << endl << endl;
            buyers++;
        }
        else {
            cout << "\nInput error. Please try again.\n";
        }
    }
    cout << "Number of buyers " << buyers << endl;
    return 0;
}

