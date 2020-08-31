//File Name: zh900_hw8_q1.cpp
//Author: Zonghong (Tommy) Hu
//Email Address: zh900@nyu.edu
//Assignment: Week 8, Q1
//Description: Program to output the smallest value(s) in an array and their indices.
//Last changed: 8/29/2020
#include <iostream>
using namespace std;

const int arrsize = 20;
int minInArrary(int arr[], int arrSize);
void index(int arr[], int min);

int main()
{
	int input[arrsize], min;
	cout << "Please enter 20 integers separated by a space:\n";
	for (int i = 0; i < arrsize; i++) cin >> input[i];
	min = minInArrary(input, arrsize);
	index(input, min);

	return 0;
}


int minInArrary(int arr[], int arrSize)
{
	int min = arr[0];
	for (int i = 0; i < arrSize; i++)
	{
		if (min > arr [i]) min = arr[i];
	}
	return min;
}

void index(int arr[], int min)
{
	cout << "\nThe minimum value is " << min << ", and it is located in the following indices: ";
	for (int i = 0; i < arrsize; i++)
	{
		if (arr[i] == min) cout << i << " ";
	}
}

