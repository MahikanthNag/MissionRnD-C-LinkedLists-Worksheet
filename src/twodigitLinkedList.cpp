/*
OVERVIEW:  Given a single linked list (two digits as a node).Convert that to number


INPUTS:  SLL head pointer

OUTPUT: Create a number from the linked list given ,In each node there are two numbers ,digit1 and digit1 ,
So if the nodes are 12->34->56->78 , Final number would be 12345678 ( Integer)

ERROR CASES:

NOTES: Only Postive Numbers
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int digit1;
	int digit2;
	struct node *next;
};

int convert_sll_2digit_to_int(struct node *head)
{
    int x;
    node *p1=(struct node*)malloc(sizeof(struct node));
    node *q1=(struct node*)malloc(sizeof(struct node));
    node *p2=(struct node*)malloc(sizeof(struct node));
    node *q2=(struct node*)malloc(sizeof(struct node));
    int c=0,res=0,ans=0,rem=0;
    p1=head;
    q1=p1;
    while(q1!=NULL)
    {
        if(c==0)
        {
            p2->digit1=p1->digit1;
            p2->digit2=p1->digit2;
            p2->next=NULL;c=1;//printf("p value: %d  and  %d\n",p2->digit1,p2->digit2);scanf("%d",&x);
        }

        else
        {
                //q2=p2;
                q1=q1->next;if(q1==NULL) break;
                node *temp=(struct node*)malloc(sizeof(struct node));
                temp->digit1=q1->digit1;temp->digit2=q1->digit2;
                temp->next=p2;
                p2=temp;//printf("p value: %d  and  %d *** %d  and  %d\n",p2->digit1,p2->digit2,p2->next->digit1,p2->next->digit2);scanf("%d",&x);
        }
    }
    q2=p2;//printf("p value: %d  and  %d\n",p2->digit1,p2->digit2);scanf("%d",&x);
    while(q2!=NULL)
    {
        res=10*res+q2->digit2;
        res=10*res+q2->digit1;
        q2=q2->next;
    }
    while(res>0)
    {
        rem=res%10;ans=10*ans+rem;res=res/10;
    }
	return ans;
}
/*int main()
{
    int ans=0;
    node *p1=(struct node*)malloc(sizeof(struct node));
    node *p2=(struct node*)malloc(sizeof(struct node));
    node *p3=(struct node*)malloc(sizeof(struct node));
    p1->digit1=1;p1->digit2=2;p1->next=p2;
    p2->digit1=3;p2->digit2=4;p2->next=p3;
    p3->digit1=5;p3->digit2=6;p3->next=NULL;
    ans=convert_sll_2digit_to_int(p1);

    printf("result is %d",ans);
}
*/
