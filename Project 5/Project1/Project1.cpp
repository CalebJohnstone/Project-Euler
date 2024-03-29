// Project1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	cout << "Smallest multiple of 1 to 20" << endl;
	bool found = false;
	int answer;

	int i = 39;

	while (!found)
	{	
		i++;
		bool divisible = true;
		int j = 1;

		while ((divisible) && (j < 20))
		{
			j++;
			if (i % j != 0)
				divisible = false;
		}

		if (divisible)
		{
			found = true;
			answer = i;
		}
	}

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
