/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include<malloc.h>
struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int k)
{

	//return NULL;
	if(k<=1|| head==NULL)
    {
        return NULL;
    }
	int c=0,d=0,x=k,i=0;int y;
	node *p=(struct node*)malloc(sizeof(struct node));
	node *q=(struct node*)malloc(sizeof(struct node));
	p=head;
	q=p;
	while(q!=NULL)
    {
        c++;q=q->next;
    }
    //printf("count is %d",c);scanf("%d",&y);

    while(x<c+1)
    {
      //  printf("loop entered");scanf("%d",&y);

       q=p;i=0;
       while(i<x-2-d)
       {
           q=q->next;i++;
       }
       //printf("next value before del  %d  \n",q->next->num);scanf("%d",&y);
       if(q->next->next!=NULL) q->next=q->next->next; else {
        q->next=NULL;}
       if(q->next!=NULL)
        {
            printf("next value before del  %d  \n",q->next->num);//scanf("%d",&y);
        }
       d++;x=x+k;


    }
    q=p;
    while(q!=NULL)
    {
        printf("%d   ",q->num);q=q->next;
    }
    return p;
}
/*int main()
{
    node *p1=(struct node*)malloc(sizeof(struct node));
    node *p2=(struct node*)malloc(sizeof(struct node));
    node *p3=(struct node*)malloc(sizeof(struct node));
    node *p4=(struct node*)malloc(sizeof(struct node));
    node *p5=(struct node*)malloc(sizeof(struct node));
    node *p6=(struct node*)malloc(sizeof(struct node));
    p1->num=1;p1->next=p2;
    p2->num=2;p2->next=p3;
    p3->num=3;p3->next=p4;
    p4->num=4;p4->next=p5;
    p5->num=5;p5->next=p6;
    p6->num=6;p6->next=NULL;
    removeEveryKthNode(p1,4);
}
*/
