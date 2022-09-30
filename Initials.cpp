// initials.cpp

#include <iostream>

using namespace std;

int main() {

	char first, middle, last;


	cout << "Enter your first middle and last names: ";


	first = cin.get();

	cin.ignore(256, ' ');

	middle = cin.get();
	
	cin.ignore(256, ' ');

	last = cin.get();

	cout << "Your initials are " << first << middle << last << endl;

	return 0;

}
