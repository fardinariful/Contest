#include<stdio.h>
#include<stdlib.h>

struct node
{
    int val;
    struct node *next;
};

struct node *head = NULL, *tail = NULL;

int main()
{
   create();
   display();
   removeDuplicateData();
   display();

}

void create()
{
    struct node *curr;
    int n, item, i;
    printf("Input number of nodes : ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {

        curr = (struct node*) malloc (sizeof (struct node));

        printf("Input data for node %d : ", i);

        scanf("%d", &item);

        curr->val = item;
        curr->next = NULL;

        if (head == NULL)
        {
            head = curr;
            tail = curr;
        }
        else
        {
            tail->next = curr;
            tail = curr;
        }
    }
}

void display()
{

    struct node *temp;
    temp = head;
    printf("\nLinked List : ");
    while (temp != NULL)
    {

        printf("%d ", temp->val);
        temp = temp->next;
    }
}

void removeDuplicateData()
{

    struct node *temp, *temp1;

    temp = head;

    while(temp->next != NULL)
    {

        if(temp->val == temp->next->val)
        {

            temp1 = temp->next->next;
            free(temp->next);
            temp->next = temp1;
        }

        else
        {
            temp = temp ->next;
        }
    }
}
