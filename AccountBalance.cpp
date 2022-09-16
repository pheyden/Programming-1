// AccountBalance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int initialBalance = 1000;
	int firstYearIncrease = initialBalance * 0.05;
	int currentBalance = initialBalance + firstYearIncrease;
	std::cout << "Balance after one year: $";
	std::cout << currentBalance << '\n';

	int secondYearIncrease = currentBalance * 0.05;
	currentBalance += secondYearIncrease;
	std::cout << "Balance after two years: $";
	std::cout << currentBalance << '\n';

	int thirdYearIncrease = currentBalance * 0.05;
	currentBalance += thirdYearIncrease;
	std::cout << "Balance after three years: $";
	std::cout << currentBalance << '\n';
}
