//File Name: zh900_week3_q6.cpp
//Author: Zonghong (Tommy) Hu
//Email Address: zh900@nyu.edu
//Assignment: Week 3, Q6
//Description: Program to cost of long-distance call.
//Last changed: 7/25/2020

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	string day;
	int t_hour;
	int call_min;
	double cost;
	const int high_charge = 0.4, int low_charge = 0.15, int medium_charge = 0.25;
	char colon;    //auxillary variable, for ignoring everything besides the hour input.
	int place_holder;    // same as above.

	cout << "On what day of the week did you call? Abbreviate to the first two lower-case letters e.g. mo/tu/we: ";
	cin >> day;
	cout << "When did you started the call? Format in 24hr: HH:MM: ";
	cin >> t_hour >> colon >> place_holder;
	cout << "How long was the call in minutes? ";
	cin >> call_min;
	cout << endl;

	if (t_hour >= 8 && t_hour < 18)
	{
		if (day == "mo" || day == "tu" || day == "we" || day == "th" || day == "fri")
		{
			cost = high_charge * call_min;
			cout << "The cost of your call is $" << setprecision(2) << fixed << cost << endl;
		}
		else
		{
			cost = low_charge * call_min;
			cout << "The cost of your call is $" << setprecision(2) << fixed << cost << endl;
		}
	}
	else if (day == "mo" || day == "tu" || day == "we" || day == "th" || day == "fri")
	{
		cost = medium_charge * call_min;
		cout << "The cost of your call is $" << setprecision(2) << fixed << cost << "." << endl;
	}
	else
	{
		cost = low_charge * call_min;
		cout << "The cost of your call is $" << setprecision(2) << fixed << cost << "." << endl;
	}


	return 0;
}
