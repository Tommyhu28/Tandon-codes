//File Name: zh900_week3_q1.cpp
//Author: Zonghong (Tommy) Hu
//Email Address: zh900@nyu.edu
//Assignment: Week 3, Q1
//Description: Program to compute purchase price.
//Last changed: 7/24/2020

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() 
{
	double item_1;
	double item_2;
	char club_card;
	double tax_rate;
	double discount_sum;
	double gross_total = 0;
	double total;
	double gross_sum;
	const double membership_discount = 0.9;

	cout << "Enter price of first item: ";
	cin >> item_1;
	cout << "Enter price of second item: ";
	cin >> item_2;
	gross_sum = item_1 + item_2;

	if (item_1 > item_2)
		discount_sum = item_1 + ((item_2) / 2);
	else
		discount_sum = ((item_1) / 2) + item_2;

	cout << "Does customer have a club card? (Y/N): ";
	cin >> club_card;
	
	switch (club_card)
	{
		case 'Y':
		case 'y': 
			gross_total = discount_sum * membership_discount;
			break;
		case 'N':
		case 'n':
			gross_total = discount_sum;
			break;
		default:
			cout << "Invalid Response." << endl;
	}
	cout << "Enter tax rate, e.g. 5.5 for 5.5% tax: ";
	cin >> tax_rate;
	total = gross_total + (gross_total * (tax_rate / 100));
	cout << "Base price: " << setprecision(1) << fixed << gross_sum << endl;
	cout << "Price after discounts: " << setprecision (1) << fixed << gross_total << endl;
	cout << "Total price: " << setprecision(5) << fixed << total;

	return 0;
}