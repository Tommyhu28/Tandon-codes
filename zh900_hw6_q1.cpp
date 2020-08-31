//File Name: zh900_hw6_q1.cpp
//Author: Zonghong (Tommy) Hu
//Email Address: zh900@nyu.edu
//Assignment: Week 6, Q1
//Description: Program to output fibonacci number.
//Last changed: 8/16/2020

#include <iostream>
using namespace std;

int fib(int n);

int main()
{
	int input, output;
	cout << "Please enter a positive integer: " << endl;
	cin >> input;

	output = fib(input);
	cout << output;
	return 0;
}

int fib(int n)
{
	int new_num = 1;
	for (int count = 1, old1 = 1, old2 = 0; count < n; count++)
	{
		new_num = old2 + old1;
		old2 = old1;
		old1 = new_num;
	}
	return new_num; 
}
