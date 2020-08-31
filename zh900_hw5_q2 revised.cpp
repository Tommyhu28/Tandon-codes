//File Name: zh900_week5_q2.cpp
//Author: Zonghong (Tommy) Hu
//Email Address: zh900@nyu.edu
//Assignment: Week 5, Q2
//Description: Guessing game.
//Last changed: 8/8/2020

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int random, input;
	srand(time(0));

	random = (rand() % 100) + 1;
	cout << "I thought of a number between 1 and 100! Try to guess it." << endl;

	for (int guess = 5, count = 0, upper_limit = 100, lower_limit = 1; guess > 0; guess--, count++)
	{
		cout << "Range: [" << lower_limit << ", " << upper_limit << "], Number of guesses left: " << guess << endl;
		cout << "Your guess: ";
		cin >> input;
		if (guess == 1 && input == random)
		{
			if (count > 1)
				cout << "Congrats! You guessed my number in " << count << " guesses." << endl;
			else
				cout << "Congrats! You guessed my number in " << count << " guess." << endl;
			break;
		}
		if (guess == 1)
		{
			cout << "Out of guesses! My number is " << random << endl;
			break;
		}
		if (input > random)
		{
			cout << "Wrong! My number is smaller." << endl << endl;
			if (upper_limit > input)
				upper_limit = input - 1;
		}
		else if (input < random)
		{
			cout << "Wrong! My number is bigger." << endl << endl;
			if (lower_limit < input)
				lower_limit = input + 1;
		}
		else
		{
			cout << "Congrats! You guessed my number in " << count << " guesses." << endl;
			break;
		}
	}
	return 0;
}