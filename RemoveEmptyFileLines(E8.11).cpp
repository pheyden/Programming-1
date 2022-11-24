// RemoveEmptyFileLines(E8.11).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//I was making this with a poem file that contained 2 lines of text with 1 blank line between them.

int main()
{
    ifstream file("poem.txt");

    string arr[2];
    string line;
    int i = 0;
    while (file.good()) {
        getline(file, line);
        if (line.size() > 0) {
            arr[i] = line;
            i++;
        }
        else {
            continue;
        }
    }
    file.close();
    ofstream output("poem.txt");
    int j = 0;
    while (j < i) {
        output << arr[j];
        output << endl;
        j++;
    }
    output.close();
    return 0;
}

