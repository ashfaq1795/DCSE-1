#include <iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
int main()
{ 
int x;
  cout<<"please enter the no of nodes: ";
  cin>>x;
	node *head=NULL;
	node *z=NULL;
	node *ptr= new node();
	ptr->data=20;
	ptr->next=NULL;
	head=ptr;
	z=head;
	for (int i=1; i<=x; i++)
	{
		cout<<"please enter the node element: ";
		cin>>ptr->data;
		
		
	}
	
	
}
