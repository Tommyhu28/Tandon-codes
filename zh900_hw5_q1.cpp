//File Name: zh900_week5_q1.cpp
//Author: Zonghong (Tommy) Hu
//Email Address: zh900@nyu.edu
//Assignment: Week 5, Q1
//Description: Program to output n*n multiplication table.
//Last changed: 8/8/2020

#include <iostream>
using namespace std;

int main()
{
	int num;
	int placeholder = 1;
	int increment;
	cout << "Please enter a positive integer: " << endl;
	cin >> num;
	for (int row = 1, count = 1; row <= num; row++, placeholder++)
	{
		for (count = 1; count <= num; count++)
		{
			increment = placeholder * count;
			cout << increment << "\t";
		}
		cout << endl;
	}

	return 0;
}