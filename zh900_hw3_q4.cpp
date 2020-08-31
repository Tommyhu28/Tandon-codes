//File Name: zh900_week3_q4.cpp
//Author: Zonghong (Tommy) Hu
//Email Address: zh900@nyu.edu
//Assignment: Week 3, Q4
//Description: Program to round numbers.
//Last changed: 7/25/2020

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int FLOOR_ROUND = 1;
	const int CEILING_ROUND = 2;
	const int ROUND = 3;
	int choice;
	double num;
	double whole;

	cout << "Please enter a Real number: " << endl;
	cin >> num;
	int tmp = (int)num;

	cout << "Choose your rounding method: " << endl;
	cout << "1. Floor round" << endl;
	cout << "2. Ceiling round" << endl;
	cout << "3. Round to the nearest whole number" << endl;
	cin >> choice;
	
	switch (choice)
	{
	case 1:
		if (num < 0 && num != tmp)
			cout << tmp - 1;
		else
			cout << tmp;
		break;
	case 2:
		if (num > 0 && num != tmp)
			cout << tmp;
		else
			cout << tmp;
		break;
	case 3:
		if (num > 0)
		{
			if (num - tmp > 0.5)
				cout << tmp + 1;
			else
				cout << tmp;
		}
		else if (num < 0)
		{
			if (num - tmp >= -0.5)
				cout << tmp;
			else
				cout << tmp - 1;
		}
		else
			cout << num;
		break;
	default:
		cout << "Invalid selection.";
		break;
	}
	return 0;
}