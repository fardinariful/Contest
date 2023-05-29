#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
 string S[n];

 for(int i=0;i<n;i++)
 {
     cin>>S[i];
 }
for(int i=0;i<n;i++)
{
    for(int j=0;j<S[i].length();j++)
    {
      S[i].at(j)-=32;
    }


}
for(int i=0;i<n;i++)
 {
  cout<<S[i]<<endl;
  }
}

