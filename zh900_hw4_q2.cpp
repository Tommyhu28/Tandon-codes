//File Name: zh900_hw4_q2.cpp
//Author: Zonghong (Tommy) Hu
//Email Address: zh900@nyu.edu
//Assignment: Week 4, Q2
//Description: Program to convert numbers to Roman numerals.
//Last changed: 8/2/2020

#include <iostream>
#include <string>
using namespace std;

int main() 
{
	int input;
	string output;
	cout << "Enter decimal number: ";
	cin >> input;
	int origin = input;


	const int M = 1000, D = 500, C = 100, L = 50, X = 10, V = 5, I = 1;
	int count_M = 0, count_D = 0, count_C = 0, count_L = 0, count_X = 0, count_V = 0, count_I = 0;

	//const int limit_D = 1, limit_L = 1, limit_V = 1, limit_C = 4, limit_X = 4, limit_I = 4;

	while (input >= M)
	{
		input -= M;
		count_M++;
	}
	while (input >= D)
	{
		input -= D;
		count_D++;
	}
	while (input >= C)
	{
		input -= C;
		count_C++;
	}
	while (input >= L)
	{
		input -= L;
		count_L++;
	}
	while (input >= X)
	{
		input -= X;
		count_X++;
	}
	while (input >= V)
	{
		input -= V;
		count_V++;
	}
	while (input >= I)
	{
		input -= I;
		count_I++;
	}
	

	while (count_M > 0)
	{
		output += "M";
		count_M--;
	}
	while (count_D > 0)
	{
		output += "D";
		count_D--;
	}
	while (count_C > 0)
	{
		output += "C";
		count_C--;
	}
	while (count_L > 0)
	{
		output += "L";
		count_L--;
	}
	while (count_X > 0)
	{
		output += "X";
		count_X--;
	}
	while (count_V > 0)
	{
		output += "V";
		count_V--;
	}
	while (count_I > 0)
	{
		output += "I";
		count_I--;
	}

	cout << origin << " is " << output;
	return 0;
}