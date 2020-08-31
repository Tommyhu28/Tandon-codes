//File Name: zh900_hw8_q2.cpp
//Author: Zonghong (Tommy) Hu
//Email Address: zh900@nyu.edu
//Assignment: Week 8, Q2
//Description: Program to check whether a word is a palindrome.
//Last changed: 8/29/2020

#include <iostream>
using namespace std;

bool isPalindrome(string str);

int main()
{
	string input;
	cout << "Enter a word: " << endl;

	cin >> input;
	if (isPalindrome(input)) cout << input << " is a palindrome.";
	else cout << input << " is not a palindrome.";

	return 0;
}

bool isPalindrome(string str)
{
	int check = 0;
	for (int i = 0; i < str.length()/2; i++)
	{
		if (str[i] == str[str.length() - 1 - i]) check++;
	}
	if (check >= (str.length() - 1) / 2 && str.length() > 1) return true;
	else return false;
}
