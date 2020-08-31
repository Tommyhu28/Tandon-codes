//File Name: zh900_hw6_q3.cpp
//Author: Zonghong (Tommy) Hu
//Email Address: zh900@nyu.edu
//Assignment: Week 6, Q3
//Description: Guessing game.
//Last changed: 8/16/2020

#include <iostream>
using namespace std;

double eApprox(int n);

int main()
{
	cout.precision(30);

	for (int n = 1; n <= 15; n++)
	{
		cout << "n = " << n << '\t' << eApprox(n) << endl;
	}
}

double eApprox(int n)
{
	double sum = 1.0;
	int denom = n;
	if (n == 0)
		return  1;
	else
	{
		for (double product = 1.0; n > 0; n--)
		{
			denom = n;
			while (denom > 0)
			{
				product *= denom;
				denom--;
			}
			sum += (1 / product);
			product = 1.0;
		}
		return sum;
	}
}
