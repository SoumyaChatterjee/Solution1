/* LinkedList1.cpp : Defines the entry point for the console application.
   initialize root
   declare another node -> traverser
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
	cout << "Hi" << endl;
	node *root; // root element of linked list
	node *traverser; // pointer, will traverse the entire linked list 
	root = new node;

	//insert into root
	root->num = 5;
	root->next = NULL;
	traverser = root; //make traverser equal to root if no other node is present

	for (int i = 0; i < 5; i++)
	{
		traverser->next = new node;
		traverser = traverser->next;
		traverser->num = i;
		traverser->next = NULL;
	}
	cout << "root is:: " << root->num <<endl;
	cout << "traverser is:: " << traverser->num << endl;

	//point traverser to root and traverse the linked list
	cout << "printing entire linked list";
	traverser = root;
	if (traverser != 0)
	{
		while (traverser->next != 0)
		{
			cout << "num is: " << traverser->num <<endl;
			traverser = traverser->next;
		}
		cout << "num is:: " << traverser->num <<endl;
	}

    return 0;
}