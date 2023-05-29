#include<bits/stdc++.h>
using namespace std;
int main()
{
    int V,T,S,D;

    cin>>V>>T>>S>>D;

    if((V*T)<=D && (V*S)>=D)
    {
        cout<<"no";
    }
    else{
        cout<<"yes";
    }


}
