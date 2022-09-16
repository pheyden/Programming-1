//notices.cpp - determines student averages based on test scores
#include <iostream>
using namespace std;
#include <iomanip>

int main()
{

	float num1, num2;
	
	cout << "Enter two numbers, separated by a space: ";
	cin >> num1 >> num2;

	cout << "Sum = " << num1 + num2 << '\n';
	cout << "Difference = " << num1 - num2 << '\n';
	cout << "Product = " << num1 * num2 << '\n';
	cout << "Average = " << (num1 + num2) / 2 << '\n';
	

	return 0;
}