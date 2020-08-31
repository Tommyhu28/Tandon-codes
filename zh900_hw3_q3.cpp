//File Name: zh900_week3_q3.cpp
//Author: Zonghong (Tommy) Hu
//Email Address: zh900@nyu.edu
//Assignment: Week 3, Q2
//Description: Program to compute quadratic solutions.
//Last changed: 7/25/2020

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() 
{
	double a;
	double b;
	double c;
	double sqrt_result;
	double solution;
	double solution_1;
	double solution_2;

	cout << "Please enter value of a: ";
	cin >> a;
	cout << "Please enter value of b: ";
	cin >> b;
	cout << "Please enter value of c: ";
	cin >> c;

	sqrt_result = sqrt((b*b) - (4 * a * c));

	if (a == 0 && b == 0 && c == 0)
	{
		cout << "Infinite number of solutions.";
	}
	if ((b*b) < (4*a*c))
	{
		cout << "No real solution";
	}
	else if (sqrt_result == 0)
	{
		solution = (-b) / (2 * a);
		cout << "This equation has a single real solution x=" << setprecision(1) << fixed << solution;
	}
	else if (sqrt_result > 0)
	{
		solution_1 = (((-b) + sqrt_result) / (2 * a));
		solution_2 = (((-b) - sqrt_result) / (2 * a));
		cout << "This equation has two solutions x=" << setprecision(1) << fixed << solution_1 << " and x=" << setprecision(1) << fixed << solution_2;
	}
	return 0;
}
