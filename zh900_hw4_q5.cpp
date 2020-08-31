//File Name: zh900_hw4_q5.cpp
//Author: Zonghong (Tommy) Hu
//Email Address: zh900@nyu.edu
//Assignment: Week 4, Q5
//Description: Program to output an asterisk hourglass based on input.
//Last changed: 8/2/2020

#include <iostream>
using namespace std;

int main()
{
	int n;
	int count = 0;
	int space = 0;
	cout << "Enter a number: ";
	cin >> n;
	int n2 = n;
	int stars;
	stars = (2 * n) - 1;
	int extra_space;
	extra_space = n2 - 1; // for second half
	int total_lines = 2 * n;

	while (total_lines > 0 && stars > 0)
	{
		if (stars > 0)
			while (stars != 0)
			{
				cout << "*";
				stars--;
			}
		cout << endl;
		stars += (2 * n) - 3;
		n--;
		total_lines--;
		count++;
		while (count > space && stars > 0)
		{
			cout << " ";
			space++;
		}
		space = 0;
	}
	n = 0;    // for reset
	count = 0;    // for reset
	while (total_lines != 0)
	{
			while (extra_space > 0)
			{
				cout << " ";
				extra_space--;
			}
		stars = 2 * n + 1;
		while (stars != 0)
		{
			cout << "*";
			stars--;
		}
		cout << endl;
		while (n2 - 2 > count)
		{
			cout << " ";
			count++;
		}
		count = 0;
		n2--;
		n++;
		total_lines--;
	}

	return 0;
}