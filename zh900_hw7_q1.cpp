//File Name: zh900_hw7_q1.cpp
//Author: Zonghong (Tommy) Hu
//Email Address: zh900@nyu.edu
//Assignment: Week 7, Q1
//Description: Program to output calenders and check leap year.
//Last changed: 8/16/2020

#include <iostream>
using namespace std;

int printmonthcalender(int numOfDays, int startingDay);
bool leapYear(int year);
void printYearCalender(int year, int startingDay);

int main()
{
	int year, startday, totalday, choice, again = 1;
	while (again != 0)
	{
		cout << "Which feature would you like to use? Type the corresponding number to proceed." << endl;
		cout << "1. Print a one-month calender." << endl;
		cout << "2. Check if a year is a leap year." << endl;
		cout << "\t *A leap year is a year with 366 days, an extra day in February of that year." << endl;
		cout << "3. Print a monthly calender." << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			cout << "Please enter the total days of the month: ";
			cin >> totalday;
			cout << endl << "Please enter the start day, e.g. 5, the month would begin on a Friday: ";
			cin >> startday;
			cout << "Here is your month calender: " << endl;
			cout << printmonthcalender(totalday, startday);
			break;
		}
		case 2:
		{
			cout << "Please enter a year you wish to check: ";
			cin >> year;
			if (leapYear(year))
				cout << year << " is a leap year, it has 366 days.";
			else
				cout << year << " is not a leap year, it has 365 days.";
			break;
		}
		case 3:
		{
			cout << "Please enter the year for the calender: ";
			cin >> year;
			cout << endl << "Please enter the start day for January, e.g";
			cout << " 5, January will start on a Friday : ";
			cin >> startday;
			cout << endl << "Here is your monthly calender: " << endl;
			printYearCalender(year, startday);
		}
		}

		cout << endl << "Would you like to go again? Type 1 to continue, 0 to stop: ";
		cin >> again;
		cout << endl;
	}
	return 0;
}

int printmonthcalender(int numOfDays, int startingDay)
{
	int count = 1;
	int output;
	//header
	cout << "Mon\t" << "Tue\t" << "Wed\t" << "Thr\t" << "Fri\t" << "Sat\t" << "Sun\t" << endl;
	
	//gap filler
	for (int fill_space = startingDay; fill_space > 1; fill_space--)
	{
		cout << "\t";
	}

	//number filler
	for (int space = 7, day = 1; numOfDays >= count; count++)
	{
		cout << count << "\t";
		if (count + startingDay > space)
		{
			space += 7;
			cout << endl;
		}

	}
	cout << endl;
	output = (startingDay + numOfDays - 1) % 7;

	if (output != 0)
		return output;
	else
	{
		output = 7;
		return output;
	}
}

bool leapYear(int year)
{
	if (year % 4 == 0 && year % 100 != 0) return true;
	else if (year % 4 == 0 && year % 100 == 0 && year % 400 == 0) return true;
	else return false;
}

void printYearCalender(int year, int startingDay)
{	
	int totaldays;
	int update = startingDay;
	for (int count = 1; count <= 12; count++)
	{
		switch (count)
		{
			case 1:
			{
				cout << "January ";
				totaldays = 31;
				break;
			}
			case 2:
			{
				cout << "February ";
				if (leapYear(year)) totaldays = 29;
				else totaldays = 28;
				break;
			}
			case 3:
			{
				cout << "March ";
				totaldays = 31;
				break;
			}
			case 4:
			{
				cout << "April ";
				totaldays = 30;
				break;
			}
			case 5:
			{
				cout << "May ";
				totaldays = 31;
				break;
			}
			case 6:
			{
				cout << "June ";
				totaldays = 30;
				break;
			}
			case 7:
			{
				cout << "July ";
				totaldays = 31;
				break;
			}
			case 8:
			{
				cout << "August ";
				totaldays = 31;
				break;
			}
			case 9:
			{
				cout << "September ";
				totaldays = 30;
				break;
			}
			case 10:
			{
				cout << "October ";
				totaldays = 31;
				break;
			}
			case 11:
			{
				cout << "November ";
				totaldays = 30;
				break;
			}
			case 12:
			{
				cout << "December ";
				totaldays = 31;
				break;
			}
		}

		cout << year << endl;
		update = printmonthcalender(totaldays, update);
		cout << endl;
		update += 1;
		if (update > 7) update -= 7;
	}
}