#include<iostream>
using namespace std;
int main()
{
    int n,sum1=0;
    cin>>n;
    int a[n][3];
    for(int i=0;i<3;i++)
    {
        sum1=0;
        for(int j=0;j<n;j++)
        {
          cin>>a[j][i];
        sum1+=a[j][i];

        }
        if(sum1!=0)
        {
            cout<<"NO"<<endl;
            return 0;
        }

    }
    cout<<"YES";

}
