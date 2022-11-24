// TelephoneFindSocial(P8.19).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    int userNum;
    cout << "Enter a phone number: ";
    cin >> userNum;
    ifstream numToName("NamesAndNumbers.txt");
    string arr[6];
    string line;
    int i;
    while (numToName.good()) {
        i = 0;
        getline(numToName, line);
        for (auto x : line) {
            if (x == ' ') {
                i++;
            }
            else {
                arr[i] += x;
            }
        }
    }
    numToName.close();
    cout << arr[0] << endl << arr[1];
    return 0;
}
