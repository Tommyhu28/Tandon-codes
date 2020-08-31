//File Name: zh900_hw4_q4.cpp
//Author: Zonghong (Tommy) Hu
//Email Address: zh900@nyu.edu
//Assignment: Week 4, Q4
//Description: Program to calculate geometric mean.
//Last changed: 8/2/2020

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	// Version 1
	cout << "Version 1" << endl;
	int length;
	double geo_mean;
	double geo_mean_v2;
	double one_third = 1.0 / 3.0;
	int product = 1;
	int product_v2 = 1;
	bool test = true;
	cout << "Please enter the length of the sequence: ";
	cin >> length;

	if (length == 0)
		cout << "The geometric mean is 0.";
	else
	{
		cout << "Please enter your sequence: " << endl;
		while (length > 0 && test == true)
		{
			int tmp;
			cin >> tmp;
			product *= tmp;
			if (!cin)
				test == false;
			length--;
		}
		geo_mean = pow(product, one_third);
		cout << "The geometric mean is: " << setprecision(4) << fixed << geo_mean << endl;
	}
	

	// Version 2
	cout << endl << endl << "Version 2" << endl;
	cout << "PLease enter a non-empty sequence of positve integers, each one in a separate line. End your sequence by typing - 1: " << endl;
	while (true)
	{
		int tmp;
		cin >> tmp;
		if (tmp == -1) break;
		product_v2 *= tmp;
	}
	geo_mean_v2 = pow(product_v2, one_third);

	cout << "The geometric mean is: " << setprecision(4) << fixed << geo_mean_v2 << endl;

	return 0;
}