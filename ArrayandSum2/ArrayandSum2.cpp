// ArrayandSum2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

int main()
{
	cout << "enter 5 digits in ascending order" << endl;
	int arr[5], sum;
	bool noIsThere = false;

	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}

	cout << endl << "enter sum:: " << endl;
	cin >> sum;

	for (int i = 0; i < 5; i++)
	{
		int complement = sum - arr[i];
		for (int j = i + 1; j < 5; j++)
		{
			if (complement == arr[j])
			{
				noIsThere = true;
				break;
			}
		}
	}
	
	if (noIsThere)
	{
		cout << endl << "numbers ARE there" << endl;
	}
	else
	{
		cout << endl << "numbers are not there" <<endl;
	}

    return 0;
}

