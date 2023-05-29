#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
 {
  int i,c;
  string fullName;
  cin>>fullName;

  sort(fullName.begin(),fullName.end());

  for(i=0;i<fullName.size();i++)
  {
      if(fullName[i]!=fullName[i+1])
      {
          c++;
      }
  }

  if(c%2==0)
  {
      cout<<"CHAT WITH HER!"<<endl;
  }
  else
  {
      cout<<"IGNORE HIM!"<<endl;
  }
   return 0;
 }


