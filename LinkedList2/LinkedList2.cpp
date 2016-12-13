/* LinkedList2.cpp : Defines the entry point for the console application.
   create linked list
   take input from user for count
   cin linked list values
   display all nodes in linked list
*/

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
	int count;
	node *root;
	node *traverser;

	root = new node;
	
	cout << "how many element you want to enter? ";
	cin >> count;
	cout << "enter " << count << " numbers in linked list: "<<endl;

	traverser = root; //initialize traverser as root
	for (int i = 0; i < count; i++)
	{
		cin>> traverser->num;
		traverser->next = new node;
		traverser = traverser->next;
		traverser->next = NULL;
	}

	cout << endl << "printing elements entered into linked list"<<endl;
	traverser = root;

	if (traverser != 0)
	{
		while (traverser->next != 0)
		{
			cout << traverser->num << endl;
			traverser = traverser->next;
		}
	}

    return 0;
}

