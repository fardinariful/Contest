#include <iostream>
#include <string>
using namespace std;

int main()
{
  string str1;
  int c;

  cin>>str1;




    for(int i=0;i<str1.length();i++)
   {

         if(str1[i]==str1[i+1])
          {
              c++;
          }
      }



   cout<<c;

    //     int b=str.length()-c;
  // if(a%2==0)
   //{
  //     cout<<"CHAT WITH HER!";
  // }
  // else
 // {
   // cout<<"IGNORE HIM!";
  //}
//
  return 0;
}
