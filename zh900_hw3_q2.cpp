//File Name: zh900_week3_q2.cpp
//Author: Zonghong (Tommy) Hu
//Email Address: zh900@nyu.edu
//Assignment: Week 3, Q2
//Description: Program to determine college status.
//Last changed: 7/24/2020

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	string name;
	string status;
	int graduation_year;
	int current_year;
	int difference;

	cout << "Please enter your name: ";
	cin >> name;
	cout << "Please enter your graduation year: ";
	cin >> graduation_year;
	cout << "Please enter current year: ";
	cin >> current_year;

	difference = graduation_year - current_year;
	switch (difference)
	{
		case 4:
			status = "Freshman";
			cout << name << ", you are a " << status;
			break;
		case 3:
			status = "Sophomore";
			cout << name << ", you are a " << status;
			break;
		case 2:
			status = "Junior";
			cout << name << ", you are a " << status;
			break;
		case 1:
			status = "Senior";
			cout << name << ", you are a " << status;
			break;
		case 0:
			status = "graduated";
			cout << name << ", you " << status;
			break;
		default:
			break;
	}
	if (difference < 0)
	{
		status = "graduated";
		cout << name << ", you " << status;
	}
	else if (difference > 4)
	{
		status = "not in college yet";
		cout << name << ", you are " << status;
	}
	return 0;
}