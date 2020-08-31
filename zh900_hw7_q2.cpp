//File Name: zh900_hw7_q2.cpp
//Author: Zonghong (Tommy) Hu
//Email Address: zh900@nyu.edu
//Assignment: Week 7, Q2
//Description: Program to output perfect numbers and amicable numbers.
//Last changed: 8/22/2020

#include <iostream>
using namespace std;

void analyzeDividors(int num, int& outCountDivs, int& outSumDivs);
bool isPerfect(int num);

int main()
{
	int M, countdiv = 0, sumdiv = 0, output_1 = 0, output_2 = 0;
	cout << "Please enter a positive intger greater than or equal to 2: ";
	cin >> M;
	
	cout << "The perfect numbers between 2 and " << M << ": ";
	for (int count = 2; M >= count; count++)
	{
		if (isPerfect(count))
		{
			cout << count << " ";
			output_1++;
		}
	}
	if (output_1 == 0) cout << "none.";

	cout << endl << "The amicable numbers between 2 and " << M << ": ";
	for (int count = 2, sumdiv_2 = 0; M >= count; count++)
	{
		analyzeDividors(count, countdiv, sumdiv);
		if (count > sumdiv) //to avoid duplicate
		{
			int num2 = sumdiv;
			analyzeDividors(num2, countdiv, sumdiv_2);
			if (sumdiv_2 == count && num2 != count)
			{
				cout << "(" << num2 << ", " << count << ")" << " ";
				output_2++;
			}
		}
		sumdiv = 0;
		sumdiv_2 = 0;
	}
	if (output_2 == 0) cout << "none.";
	
	return 0;
}

void analyzeDividors(int num, int& outCountDivs, int& outSumDivs)
{
	int middle = sqrt(num);
	for (int count = 1; middle >= count; count++)
	{
		int other_half = num / count;
		if (num % count == 0 && count != other_half)
		{
			outSumDivs += count + other_half;
			outCountDivs += 2;
		}
		else if (num % count == 0)
		{
			outSumDivs += count;
			outCountDivs++;
		}
	}
	outSumDivs -= num;
	outCountDivs -= 1;
}

bool isPerfect(int num)
{
	int countdiv = 0, sumdiv = 0;
	analyzeDividors(num, countdiv, sumdiv);
	if (num == sumdiv) return true;
	else return false;
}
