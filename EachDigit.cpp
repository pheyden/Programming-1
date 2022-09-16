// EachDigit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int input;
	cout << "Enter a five digit number: ";
	cin >> input;

	cout << input / 10000 << " ";
	input = input % 10000;
	cout << input / 1000 << " ";
	input = input % 1000;
	cout << input / 100 << " ";
	input = input % 100;
	cout << input / 10 << " ";
	input = input % 10;
	cout << input;

	return 0;
}
