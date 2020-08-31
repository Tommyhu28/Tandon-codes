//File Name: zh900_hw4_q6.cpp
//Author: Zonghong (Tommy) Hu
//Email Address: zh900@nyu.edu
//Assignment: Week 4, Q6
//Description: Program to calculate output positive even integers whose digit sum is even.
//Last changed: 8/2/2020

#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter a positive integer: ";
	cin >> n;
	int num, currDigit, sumDigit = 0;
	int reverse_order;
	reverse_order = n*0;

	while (reverse_order <= n && n > 1)
	{
		if (reverse_order == 0)
			reverse_order++;

		if (reverse_order % 2 == 0)
		{
			num = reverse_order;
			while (num > 0)
			{
				currDigit = num % 10;
				sumDigit += currDigit;
				num = num / 10;
			}
			if (sumDigit % 2 == 0)
				cout << reverse_order << endl;
			sumDigit = 0;
		}
		reverse_order++;
	}

	return 0;
}