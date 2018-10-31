#include<bits/stdc++.h>

using namespace std;

struct Lst
{
	int data;
	struct Lst* next;
};
void printMiddle(struct Lst *head)
{
	struct Lst *slowp,*fastp;
	slowp= head;
	fastp= head;
	if(head!=NULL)
	{
		while(fastp!=NULL && fastp->next!=NULL)
		{
			fastp=fastp->next->next;
			slowp=slowp->next;
		}
		cout << slowp->data << endl;
	}

}
void printList(struct Lst *ptr) 
{ 
	while (ptr != NULL) 
	{ 
		printf("%d->", ptr->data); 
		ptr = ptr->next; 
	} 
	printf("NULL\n"); 
} 
void push(struct Lst **head_ref,int ndata)
{
	struct Lst *node=(struct Lst*) malloc(sizeof(struct Lst));
	node->data=ndata;
	node->next= (*head_ref);
	(*head_ref)=node;

}
int main()
{

	struct Lst *head=NULL;

	for (int i=5; i>0; i--) 
	{ 
		push(&head, i); 
		printList(head); 
		printMiddle(head); 
	} 
	return 0;
}
