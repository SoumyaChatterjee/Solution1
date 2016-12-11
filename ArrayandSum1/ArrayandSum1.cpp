// ArrayandSum1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

using namespace std;

class Array
{
public:
	 int arr[5];

	void arrayInput (int a[5])
	{
		cout << "enter 5 digits in ascending order:" << endl;
		for (int i = 0; i < 5; i++)
		{
			cin >> arr[i];
		}

	}
};

class Sum
{
protected:
	int sum;
public:
	void sumOfNumbers(int s)
	{
		cout << "enter the sum:" << endl;
		cin >> sum;
	}
};

class Result:public Array, public Sum
{
public:
	bool sumIsThere = false;
	
	void result(void)
	{
		cout << "array entered is: ";
		for (int i = 0; i < 5; i++)
		{
			cout << arr[i];
		}
		

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

		cout << endl << "sum entered is: " << sum;

		if (sumIsThere)
		{
			cout << endl << "required numbers are there :: " << sumIsThere << endl;
		}
		else
		{
			cout << "required numbers NOT are there :: " << sumIsThere << endl;
		}
	}
};

int main()
{
	cout << "Hi" <<endl;
	int arr[5];
	int s = 0;
	
	Result r;
	r.arrayInput(arr);
	r.sumOfNumbers(s);
	r.result();
		
    return 0;
}

