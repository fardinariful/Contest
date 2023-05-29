#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);
    if(n%100==0)
    {
      printf("%d",n/100);
    }
    else
    {
        printf("%d",(n/100)+1);
    }
}
