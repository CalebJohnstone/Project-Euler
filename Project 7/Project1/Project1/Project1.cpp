// Project1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	cout << "10 001st prime number" << endl;
	int answer;

	int i = 2;
	int count = 1;

	while (count < 10001)
	{
		i++;
		//check whether it is a prime
		bool prime = true;
		int j = 1;

		while ((j < sqrt(i)) && (prime))
		{
			j++;
			if (i % j == 0)
				prime = false;
		}

		if (prime)
			count++;
	}
	
	answer = i;
	cout << "Answer = " << answer;
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
