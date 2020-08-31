//File Name: zh900_hw8_q4.cpp
//Author: Zonghong (Tommy) Hu
//Email Address: zh900@nyu.edu
//Assignment: Week 8, Q4
//Description: Program to prevent shoulder surfing.
//Last changed: 8/29/2020

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

const int pwsize = 5;
const int randomsize = 10;
const int pw[pwsize] = { 1,2,3,4,5 }; // <--This is the password
void check(const int password[], int randnum[], string input);


int main()
{
	cout << "The password is: "; // for debug
	for (int i = 0; i < pwsize; i++) cout << pw[i] << " ";
	cout << endl;

	string input;
	int randnum[randomsize];
	cout << "Please enter your PIN according to the following mapping:" << endl;
	cout << "PIN:\t 0 1 2 3 4 5 6 7 8 9" << endl;
	cout << "NUM:\t ";
	srand((unsigned int)time(0));
	for (int i = 0, randisplay; i < randomsize; i++) //random num generate
	{
		randisplay = (rand() % 3) + 1;
		cout << randisplay << " ";
		randnum[i] = randisplay;
	}

	cout << endl;
	cin >> input;
	check(pw, randnum, input);

	return 0;
}

void check(const int password[], int randnum[], string input)
{
	int correct[pwsize];
	int good = 0;
	for (int i = 0, value; i < pwsize; i++) // create the correct input, according to the randnum
	{
		value = password[i];
		correct[i] = randnum[value];
	}

	for (size_t i = 0; i < input.length(); i++) // verify user input
	{
		char value = '0' + correct[i];
		char inputv = input[i];
		if (value == inputv) good++;
	}
	if (good == 5) cout << "Your PIN is correct.";
	else cout << "Your PIN is incorrect.";
}