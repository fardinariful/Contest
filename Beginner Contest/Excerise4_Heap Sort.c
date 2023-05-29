#include<stdio.h>
int main()
{
    printf("Enter size : ");
    int n;
    scanf("%d", &n);
    int a[n+1];
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i=n/2; i>=1; i--)
    {
        heapify(a,n,i);
    }
    printf("convert array to MaxHeap:  \n");
    for(int i= 1; i<=n; i++)
    {
        printf("%d ", a[i]);
    }
    for(int i=n; i>=1; i--)
    {
        int temp= a[i];
        a[i]= a[1];
        a[1]=temp;
        heapify(a,i-1,1);
    }
    printf("\n");
    printf("Sorted Heap is:  \n");
    for(int i=1; i<=n; i++)
    {
        printf("%d ", a[i]);
    }
}
void heapify(int a[], int n, int i)
{
    int largest= i;
    int left= 2*i;
    int right= 2*i+1;
    if(left<=n && a[largest]<a[left])
    {
        largest=left;
    }
    if(right<=n && a[largest]<a[right])
    {
        largest=right;
    }
    if(largest!=i)
    {
        int swap =a[largest];
        a[largest]= a[i];
        a[i]= swap;
        heapify(a,n,largest);
    }
}




