// Project2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	cout << "The sum of the even Fibonacci numbers valued at less than 4 million" << endl;

	int fibonacciSum = 0;
	int evenSum = 0;
	int term1 = 1;
	int term2 = 2;

	while (fibonacciSum < 4000000)
	{
		fibonacciSum = term1 + term2;
		term1 = term2;
		term2 = fibonacciSum;

		if (term1 % 2 == 0)
			evenSum += term1;
	}

	cout << "Answer = " << evenSum << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
