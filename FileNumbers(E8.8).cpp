// FileNumbers(E8.8).cpp

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    do {
        string fileName;
        ifstream input;
        cout << "Enter a file name: ";
        cin >> fileName;
        input.open(fileName);
        if (input.fail()) {
            return 0;
        }
        string line;
        int numOfLines = 0;
        int numOfChar = 0;
        int numOfWords = 0;
        int i = 0;
        while (input.good()) {
            getline(input, line);
            numOfLines++;
            numOfChar += line.size();
            for (i = 0; i < line.size(); i++) {
                if (line[i] == ' ') {
                    numOfWords++;
                }
            }
            numOfWords++;
        }
        input.close();
        cout << "Number of lines: " << numOfLines << endl << "Number of characters: " << numOfChar << endl << "Number of words: " << numOfWords << endl;
    } while (1);
}