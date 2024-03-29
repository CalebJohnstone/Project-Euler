// Project1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	cout << "Largest Collatz sequence starting from below 1 million" << endl;

	int longestChain = 0;
	int currentChain;
	long long int longestStart;

	for (int i = 1; i < 1000000; i++)
	{
		currentChain = 1;
		long int j = i;

		while (j > 1)
		{
			if (j % 2 == 0)
				j = j / 2;
			else
				j = (j * 3) + 1;
			currentChain++;
		}

		if (currentChain > longestChain)
		{
			longestChain = currentChain;
			longestStart = i;
		}
	}

	cout << "Start point = " << longestStart << endl;
	cout << "Chain length = " << longestChain << endl;
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
