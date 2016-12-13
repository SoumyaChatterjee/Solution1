// ArrayandSum3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

struct node
{
	int num;
	node *next;
};
int main()
{
	node *root;
	root = new node;

	node *traverser;
	traverser = root;

	cout << "enter 5 numbers in linked list"<<endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> traverser->num;
		traverser->next = new node;
		traverser = traverser->next;
		traverser->next = NULL;
	}

	cout << endl << "printing linked list";
	traverser = root;

	if (traverser != NULL)
	{
		while (traverser->next != NULL)
		{
			cout << traverser->num <<endl;
			traverser = traverser->next;
		}
	//	cout << traverser->num <<endl;
	}

    return 0;
}

