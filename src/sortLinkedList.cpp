/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>
#include<malloc.h>
struct node {
	int num;
	struct node *next;
};

struct node * sortLinkedList(struct node *head)
{

	//return NULL;
	if(head==NULL)
        return NULL;
	node *p=(struct node*)malloc(sizeof(struct node));
	node *q=(struct node*)malloc(sizeof(struct node));
	node *q1=(struct node*)malloc(sizeof(struct node));
	p=head;
	int i,j,t,c=0;
	q=p;
	while(q!=NULL)
    {
        c++;q=q->next;
    }
    q=p;q1=p;
    for(i=0;i<c;i++)
    {
        for(j=0;j<c-i-1;j++)
        {
            if(q->num>q->next->num) {t=q->num;q->num=q->next->num;q->next->num=t;}
            q=q->next;
        }
        q=p;
    }
    return p;

}
