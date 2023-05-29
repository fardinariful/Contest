#include<iostream>
using namespace std;
int main()
{
    int n,sum1=0;
    cin>>n;
    int a[n][3];
    for(int i=0;i<n;i++)
    {

        for(int j=0;j<3;j++)
        {
          cin>>a[i][j];
        }
    }

    for(int i=0;i<3;i++)
    {
        sum1=0;
        for(int j=0;j<n;j++)
        {
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
