#include <iostream>
using namespace std;

int main()
{
    int n, r= 0, remainder, p;

    cin>>n;
    p = 0 +' n';
    while (n!= 0)
    {
    remainder = n % 10;
    r =  r * 10 + remainder;
    n /= 10;
    }

    if (p == r)
       cout<<"yes";
    else
        cout<< "no";




}
