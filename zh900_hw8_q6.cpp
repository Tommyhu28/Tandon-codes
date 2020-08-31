//File Name: zh900_hw8_q6.cpp
//Author: Zonghong (Tommy) Hu
//Email Address: zh900@nyu.edu
//Assignment: Week 8, Q6
//Description: Program to protect privacy.
//Last changed: 8/30/2020

#include <iostream>
#include <string>
using namespace std;

const int numsize = 10;
const int num2[numsize] = { 0,1,2,3,4,5,6,7,8,9 };
void search(string input);


int main()
{
	string input;
	cout << "Please enter a line of text:" << endl;
	getline(cin, input);
	search(input);
	return 0;
}

void search(string input)
{
	for (size_t i = 0; i < input.length(); i++)
	{
		char invalue = input[i];
		if (invalue == ' ') //First: if the char is a space
		{	
			//cout << endl << "The first number check is: ";
			for (int h = 0; h < numsize; h++)
			{
				char nextvalue = input[i + 1];
				char firstlevel = '0' + num2[h];
				//cout << endl << "The next value after finding the space is: " << nextvalue;
				//cout << firstlevel;
				if (nextvalue == firstlevel)  // if next value is a number.
				{
					int count = 0, isnum = 0;
					//cout << endl << "The length of the segment is: ";
					for (size_t f = i + 1; f < input.length(); f++)  // get the length of the segment where it starts with a number
					{
						char nxt = input[f];
						if (nxt != ' ') count++;
						else break;
					}
					//cout << count;
					//cout << endl << "The characters in the segment are: ";
					//cout << endl << "Converting numbers to char numbers: ";
					for (unsigned int b = i + 1; b <= i + count; b++)  // loop within the segment
					{
						char within = input[b];
						for (int z = 0; z < numsize; z++)  // find out if the segment is all numbers
						{
							char secondlevel = '0' + num2[z];
							//cout << secondlevel;
							if (within == secondlevel)
							{
								isnum++;
								break;
							}
						}
						//cout << within << " ";
					}
					//cout << endl << "The number of numbers in the segment is: " << isnum << endl;
					if (isnum == count) // if all numbers, then replace them with x
					{
						for (unsigned int q = i + 1; q <= i + count; q++)
						{
							input[q] = 'x';
						}
					}
				}
			}
		}
	}
	for (size_t i = 0; i < input.length(); i++)
	{
		cout << input[i];
	}
}