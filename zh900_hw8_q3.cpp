//File Name: zh900_hw8_q3.cpp
//Author: Zonghong (Tommy) Hu
//Email Address: zh900@nyu.edu
//Assignment: Week 8, Q3
//Description: Program to output perfect numbers and amicable numbers.
//Last changed: 8/22/2020

#include <iostream>
using namespace std;

const int standard = 5;
void reverseArrary(int arr[], int arrsize);
void removeOdd(int arr[], int& arrsize);
void splitParity(int arr[], int arrsize);

int main()
{
	int arr1[] = { -2,5,22,0,0 };
	int arr2[] = { -2,-100,3000,59,59 };
	int arr2size = 5;
	int arr3[] = { -3,-3,-3,-3,-3 };

	reverseArrary(arr1, standard);
	removeOdd(arr2, arr2size);
	splitParity(arr3, standard);

	return 0;
}

void reverseArrary(int arr[], int arrsize)
{
	for (int i = 0; i < arrsize/2; i++)
	{
		int temp = arr[i];
		arr[i] = arr[arrsize - 1 - i];
		arr[arrsize - 1 - i] = temp;
	}

	for (int i = 0; i < arrsize; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void removeOdd(int arr[], int& arrsize)
{
	int n = 0;
	for (int i = 0; i < arrsize; i++)
	{
		if (arr[i] % 2 == 0)
		{
			arr[n] = arr[i];
			n++;
		}
	}
	arrsize = n;
	for (int i = 0; i < arrsize; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void splitParity(int arr[], int arrsize)
{
	for (int i = 0, odd = 0; i < arrsize; i++)
	{
		if (arr[i] % 2 != 0)
		{
			int temp = arr[odd];
			arr[odd] = arr[i];
			arr[i] = temp;
			odd++;
		}
	}
	for (int i = 0; i < arrsize; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}