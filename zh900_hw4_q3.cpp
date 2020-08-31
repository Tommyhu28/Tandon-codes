//File Name: zh900_hw4_q3.cpp
//Author: Zonghong (Tommy) Hu
//Email Address: zh900@nyu.edu
//Assignment: Week 4, Q3
//Description: Program to convert decimal to binary.
//Last changed: 8/2/2020

#include <iostream>
using namespace std;

int main()
{
	int input;
	cout << "Enter decimal number: " << endl;
	cin >> input;
	int origin = input;
	int count = 0;

	while (pow(2, count) < input)   // determining the magnitude of the input in 2^count
	{
		count++;
	}

	if (input == 0)
		cout << "The binary representation of 0 is 0";
	else
	{
		cout << "The binary representation of " << origin << " is ";
		while (input < pow(2, count) && input != 0)
		{
			count--;
			if (input >= pow(2, count))
			{
				input -= pow(2, count);
				cout << "1";
			}
			else
			{
				cout << "0";
			}
		}
	}

	while (count > 0)
	{
		cout << "0";
		count--;
	}

	return 0;
}