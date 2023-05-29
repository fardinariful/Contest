#include<iostream>
using namespace std;
int main()
{
    int V,S,T,D;
    cin>>V>>S>>T>>D;
    if(D==V*(T-S))
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}
