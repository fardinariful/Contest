#include<stdio.h>
int main()
{
    int a[10],even[10],odd[10],c1,c2,*p,*q,*r;
    p=a;
    q=even;
    r=odd;
    for(int i=0;i<10;i++)
    {
        scanf("%d",p+i);
        if(*(p+i)%2==0)
        {
            *q=*(p+i);
            c1++;

        }
        printf("%d",even[i]);
        if(*(p+i)%2==1)
           {
               *r=*(p+i);
                c2++;

           }
              printf("%d",odd[i]);
    }



    return 0;
}
