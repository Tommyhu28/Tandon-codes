//File Name: zh900_hw6_q2.cpp
//Author: Zonghong (Tommy) Hu
//Email Address: zh900@nyu.edu
//Assignment: Week 6, Q2
//Description: Program to create a pine tree.
//Last changed: 8/16/2020

#include <iostream>
using namespace std;

void printShiftedTriangle(int n, int m, char symbol);
void printPineTree(int n, char symbol);
	
// n = line, m = min_space

int main()
{
	int line, min_space, triangles;
	char symbol;
	cout << "Please enter the height of each section of the pine tree: ";
	cin >> line;
	cout << "Please enter the number of triangles for this pine tree: ";
	cin >> triangles;
	cout << "Please enter the symbol used for constructing the tree: ";
	cin >> symbol;
	cout << "Enter the number of spacing for a section of the tree: ";
	cin >> min_space;

	cout << endl << "Below is a section of the pine tree:" << endl;
	printShiftedTriangle (line, min_space, symbol);
	cout << endl;
	cout << "Below is the pine tree as specified: " << endl;
	printPineTree(triangles, symbol);
	return 0;
}


void printShiftedTriangle(int n, int m, char symbol)
{
	for (int count = 1, max_space = m + n - 1, stars; count <= n; count++, m--)
	{
		max_space = m + n - 1;
		stars = (2 * count) - 1;
		for (max_space; max_space > 0; max_space--)
		{
			cout << " ";
		}
		for (stars; stars > 0; stars--)
		{ 
			cout << symbol;
		}
		cout << endl;
	}
	return;
}

// n = # of pine trees
void printPineTree(int n, char symbol)
{
	for (int count = 1; count <= n; count++)
	{
		for (int line = count + 1, star_count = 1, control = 0, max_space = n ; line > 0; line--, star_count += 2, control++)
		{
			for (int space_count = max_space - control; space_count > 0; space_count--)
				cout << " ";
			for (int stars = star_count; stars > 0; stars--)
				cout << symbol;
			cout << endl;
		}
	}
	return;
}