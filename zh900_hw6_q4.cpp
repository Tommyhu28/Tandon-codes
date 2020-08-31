//File Name: zh900_hw6_q4.cpp
//Author: Zonghong (Tommy) Hu
//Email Address: zh900@nyu.edu
//Assignment: Week 6, Q4
//Description: Program to output divisors.
//Last changed: 8/16/2020

#include <iostream>
#include <cmath>
using namespace std;

void printDivisors(int num);

int main()
{
	int input;
	cout << "Please enter a positive integer >= 2: ";
	cin >> input;

	printDivisors(input);
	return 0;
}

void printDivisors(int num)
{
	int divisor_2 = sqrt(num);
	for (int divisor = sqrt(num), count = 1; divisor >= count; count++)
	{
		if (num % count == 0)
			cout << count << " ";
	}

	for (int divisor_2 = sqrt(num-1); divisor_2 > 0; divisor_2--)
	{
		int second_output = num / divisor_2;
		if (num % divisor_2 == 0)
			cout << second_output << " ";
	}
}