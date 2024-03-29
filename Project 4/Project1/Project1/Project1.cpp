// Project1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main()
{
	cout << "Largest palindrome product made from two 3 digit numbers" << endl;

	int answer = 0;

	for (int i = 100; i < 998; i++)
	{
		for (int j = i; j < 999; j++)
		{
			int product = i * j;
			
			//check whether it is a palindrome
			string productString = to_string(product);
			int length = productString.length();
			string left = productString.substr(0, ceil(length / 2));
			string right = productString.substr(ceil(length / 2), length - ceil(length / 2));
			right = string(right.rbegin(), right.rend());

			if ((left == right) && (product > answer))
				answer = product;
		}
	}

	cout << "Answer = " << answer << endl;
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
