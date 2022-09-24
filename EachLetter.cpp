// EachLetter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>
using namespace std;


//this gets and prints each letter of the user's input
void extractLetter(string str) {
	
	char single;
	int l = str.length();
	for (int i = 0; i < l; i++) {
		single = str.at(i);
		cout << single << endl;
	}
}

//this prompts the user for a word and sends the word into the "extractLetter" function
int main()
{
	cout << "Enter a word: " << endl;
	string userInput;
	cin >> userInput;
	cout << endl;
	extractLetter(userInput);
	
	return 0;
	
}

