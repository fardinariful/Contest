#include<stdio.h>
int main()
{
    int a,b,c,*p,*q,*r;
    p=&a;
    q=&b;
    r=&c;
    scanf("%d %d %d",p,q,r);
    if(*p>*q && *p>*r)
    {
        printf("The maximum value is =%d",*p);
    }
    else if(*q>*p && *q>*r)
    {
         printf("The maximum value is =%d",*q);
    }
    else{
         printf("The maximum value is =%d",*r);
    }

    return 0;
}
