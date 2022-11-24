// TemplateAndDatabase(P8.18).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream database("database.txt");
    ifstream temp;
   
    string line, tempLine;
    string arr[7];
    int i;

    while (database.good()) {
        i = 0;
        arr[0] = "";
        arr[1] = "";
        arr[2] = "";
        arr[3] = "";
        arr[4] = "";
        arr[5] = "";
        arr[6] = "";
        getline(database, line);
        for (auto x : line) {
            if (x == '|') {
                i++;
            }
            else {
                arr[i] += x;
            }
        }
        temp.open("template.txt");
        while (temp.good()) {
            getline(temp, tempLine);
            for (auto y : tempLine) {
                if (y == '|') {
                    continue;
                }
                else if (y == '1') {
                    cout << arr[0];
                }
                else if (y == '2') {
                    cout << arr[1];
                }
                else if (y == '3') {
                    cout << arr[2];
                }
                else if (y == '4') {
                    cout << arr[3];
                }
                else if (y == '5') {
                    cout << arr[4];
                }
                else if (y == '6') {
                    cout << arr[5];
                }
                else if (y == '7') {
                    cout << arr[6];
                }
                else {
                    cout << y;
                }
            }
            cout << endl;
        }
        temp.close();
        cout << endl;
    }
    database.close();

    return 0;
}

