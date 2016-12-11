// AreaSquare.cpp : Defines the entry point for the console application.
// We will find area of a rectangle

#include "stdafx.h"
#include "iostream"
#include "exception"

using namespace std;

//a == height. b == width
void area(double a, double b) {
	double area = a*b;
	cout << endl << "area is : " << area << endl;
}

void input(double i, double j) {
	cout << "enter height: ";
	cin >> i;
	try {
		if (i <= 0) {
			cout << "height can't be ZERO!" << endl;
			throw;

		}
	}
	catch (exception e) {
		cout << "height can't be ZERO!" << endl;
	}
	cout << endl << "enter width: ";
	cin >> j;
	try {
		if (j <= 0) {
			cout << "width can't be ZERO!" << endl;
			throw;
		}
	}
	catch (exception e) {
		cout << "width can't be ZERO!" << endl;
	}
	area(i, j);
}



int main() {
	cout << "Hello, we will find area today" << endl;
	double i = 0;
	double j=0;
	input(i, j);
	return 0;
}
