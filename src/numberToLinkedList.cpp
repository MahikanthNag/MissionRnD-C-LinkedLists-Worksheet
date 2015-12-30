/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES:

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N)
{
//	return NULL;
    int rem,c=0;int x;
    node *p=(struct node*)malloc(sizeof(struct node));//p=NULL;
    node *q=(struct node*)malloc(sizeof(struct node));//q=NULL;

    //p->next=NULL;
    if(N==0)
    {
        p->next=NULL;p->num=0;
        return p;
    }
    if(N<0)N=-N;
    while(N>0)
    {
        rem=N%10;
        if(c==0)
        {
            //printf("did not enter if:");
            node *temp=(struct node*)malloc(sizeof(struct node));//temp=NULL;
            temp->num=rem;temp->next=NULL;
            p=temp;
            //printf("p->num= %d",p->num);//scanf("%d",&x);
            c=1;
        }
        else
        {
            q=p;
            //p->num=rem;
            //printf("step1");
            /*while(q->next!=NULL)
            {
                q=q->next;
            }
           // printf("step2 after loop");
            node *temp=(struct node*)malloc(sizeof(struct node));//temp=NULL;
            temp->num=rem;temp->next=NULL;
            q->next=temp;printf("q->num= %d",q->num);   */
            node *temp=(struct node*)malloc(sizeof(struct node));
            temp->num=rem;temp->next=p;
            p=temp;

        }N=N/10;//printf("the value of n is %d",N);
    }
    return p;
}
/*int main()
{
    node *p=(struct node*)malloc(sizeof(struct node));
    node *q=(struct node*)malloc(sizeof(struct node));p->next=q;p->num=2;q->next=NULL;q->num=3;
    p=numberToLinkedList(3458);
    q=p;
    while(q->next!=NULL)
    {
        printf("%d  ",q->num);q=q->next;
    }
    //printf("%d",q->num);
    //printf("loop exited");
    return 0;
}*/
