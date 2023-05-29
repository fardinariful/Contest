#include<stdio.h>
int main()
{
    int t,n,p;
    scanf("%d",&t);

    for(int i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(int j=i;j<n;j++)
        {
            scanf("%d",&p);
             printf(" %d",p);
        }


    }

}
