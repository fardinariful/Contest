#include<stdio.h>
#include<stdlib.h>
void create()
{
    int n,k,xyz;
    struct node *temp,*temp2;
    scanf("%d",&n);
    scanf("%d",&k);
    int a=n/k;

    for(int i=0;i<=n;i++)
    {
    scanf("%d",&xyz);
    temp=(struct node *) malloc (sizeof(xyz*struct node));
    temp->val=xyz;
    temp->next=NULL;
    }
if(head==NULL)
{
    head=temp;
    tail=temp;
}
else  {
    tail->next=temp;
    tail=temp;
}

}


struct node{
 int val;
 struct node *next;

};
struct node *head=NULL, *tail=NULL;
void del_at(int a)
{

   node *temp=head;
   for(int i=0;i<c;i++)
   {
       for(int i=0;i<c-1;i++)
       {
           temp1=temp;
           temp=temp->next;
       }
       temp2=temp->next;
       temp1->next=temp2;
       temp2->previous=temp1;
       free(temp);
   }
}
int main()
{
    create();
    del_at(a);
}
