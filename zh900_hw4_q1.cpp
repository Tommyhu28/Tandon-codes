//File Name: zh900_hw4_q1.cpp
//Author: Zonghong (Tommy) Hu
//Email Address: zh900@nyu.edu
//Assignment: Week 4, Q1
//Description: Program to output positive even integers.
//Last changed: 8/2/2020

#include <iostream>
using namespace std;

int main()
{
	int num, i;
	int count = 1;
	cout << "Section a" << endl;

	cout << "Please enter a positive integer: ";
	cin >> num;

	while (count <= num)
	{
		i = count * 2;
		cout << i << endl;
		count += 1;
	}

	cout << endl << "Section b" << endl;
	
	for (count = 1; count <= num; count += 1)
	{
		i = count * 2;
		cout << i << endl;
	}

	return 0;
}