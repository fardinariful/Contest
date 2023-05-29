#include<stdio.h>

 void swap(int *a,int *b)
{
    int tamp;
    tamp=*a;
    *a=*b;
    *b=tamp;
}
int main()
{
    int a=10,b=14;
    printf("%d %d",a,b);
    swap(&a,&b);
    printf("%d %d",a,b);

}
