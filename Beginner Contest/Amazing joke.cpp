#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{

    string a,b,c,d;
    cin>>a;
    cin>>b;
    cin>>c;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    d=a+b;
    if(c==d)
    {
        cout<<"Yes"<<endl;
    }
    else{
       cout<<"No"<<endl;
    }

}


