/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};

void sll_012_sort(struct node *head)
{
        node *p=(struct node*)malloc(sizeof(struct node));
        node *q1=(struct node*)malloc(sizeof(struct node));
        node *q2=(struct node*)malloc(sizeof(struct node));
        int i,j,c=1,t;
        p=head;
        q1=p;q2=p;
        while(q1->next!=NULL)
        {
            q1=q1->next;c++;
        }

        for(i=0;i<c;i++)
        {
            for(j=0;j<c-i-1;j++)
            {
                if(q2->data>q2->next->data)
                {
                    t=q2->data;q2->data=q2->next->data;q2->next->data=t;
                }
                q2=q2->next;
            }
            //q1=q1->next;
            q2=p;
        }
        head=p;
        q2=p;
        while(q2->next!=NULL)
        {
            printf("***%d",q2->data);q2=q2->next;
        }
        printf("***%d",q2->data);
}
