//File Name: zh900_week3_q5.cpp
//Author: Zonghong (Tommy) Hu
//Email Address: zh900@nyu.edu
//Assignment: Week 3, Q5
//Description: Program to compute BMI.
//Last changed: 7/25/2020

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double weight, height, weight_kilo, height_m, bmi;
	const double p_k = 0.453592;
	const double i_m = 0.0254;
	int power = 2;
	const double low = 18.5, int medium = 25, high = 30;

	cout << "Please enter weight (in pounds): ";
	cin >> weight;
	cout << "Please enter height (in inches): ";
	cin >> height;

	weight_kilo = weight * p_k;
	height_m = height * i_m;
	bmi = weight_kilo / (pow(height_m, power));

	if (bmi < low)
		cout << "The weight status is: Underweight";
	else if (bmi >= low && bmi < medium)
		cout << "The weight status is: Normal";
	else if (bmi >= medium && bmi < high)
		cout << "The weight status is: Overweight";
	else
		cout << "The weight status is: Obese";

	return 0;
}