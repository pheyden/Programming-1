// ReversePoem(E8.5).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream input;
    ofstream output("output.txt");
    input.open("input.txt");
    string line;
    int len;
    int n;
    int i;
    while (!input.eof()) {
        getline(input, line);
        len = line.length();
        n = len - 1;
        i = 0;
        while (i <= n) {
            swap(line[i], line[n]);
                n = n - 1;
                i = i + 1;
        }
        output << line << endl;
    }
    input.close();
    output.close();
    return 0;
}

