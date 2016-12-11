// ArrayandSum.cpp : Defines the entry point for the console application.
 
#include "stdafx.h"
#include "iostream"
using namespace std;


int main()
{
	float sum;
	int arr[5];
	bool sumIsThere = false;
	
	cout << " enter 5 numbers in ascending order:" <<endl;

	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
		if (i == 4)
		{
			cout << endl << "all 5 numbers have been entered";
		}
	}

	cout << endl << "enter sum: ";
	cin >> sum;

	for (int i = 0; i < 5; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (arr[i] + arr[j] == sum)
			{
				sumIsThere = true;
				break;
			}
		}
	}

	if (sumIsThere)
	{
		cout << "sum can be POSSIABLE out of the numbers supplied by user." << endl;
	}
	else
	{
		cout << "sum can be NOT be possiable out of the numbers supplied by user." << endl;
	}

    return 0;
}

