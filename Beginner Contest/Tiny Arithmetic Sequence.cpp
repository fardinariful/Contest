#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int a[3];
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
    }
    sort(a,a+3);
    if(a[2]-a[1]==a[1]-a[0])
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;

    }


}
