// Project1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	cout << "First triangle number with over 500 divisors" << endl;

	unsigned long long int sumNaturals = 0;
	unsigned long long int currentNumber = 0;
	bool found = false;

	while (!found)
	{
		sumNaturals += ++currentNumber;
		int numOfFactors = 2;

		for (int i = 2; i <= sumNaturals/2; i++)
			if (sumNaturals % i == 0)
				numOfFactors++;
		cout << sumNaturals << " " << numOfFactors << endl;
		
		if (numOfFactors > 500)
			found = true;
	}

	cout << "Answer = " << sumNaturals << endl;

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
