// Project3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	cout << "Largest prime factor of a number" << endl;
	cout << "Enter the number: ";
	int64_t x;
	cin >> x; //600851475143
	int64_t bigPrimeFactor = 0;

	for (int64_t i = 2; i < sqrt(x); i++)
	{
		if (x % i == 0)
		{
			cout << "Factor: " << i << endl;

			int64_t j = 1;
			bool prime = true;

			while ((j < sqrt(i)) && (prime))
			{
				j++;
				if (i % j == 0)
					prime = false;
			}

			if ((prime) && (i > bigPrimeFactor))
			{
				bigPrimeFactor = i;
				
			}
			
			if(prime)
				cout << "Prime factor: " << i << endl;
		}
	}
	
	if (bigPrimeFactor == 0)
		bigPrimeFactor = x;

	cout << "Answer = " << bigPrimeFactor << endl;
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
