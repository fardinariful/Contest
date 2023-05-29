#include<iostream>
using namespace std;
int main()
{
    int x,r,c;
    cin >> x >> r >> c;
    int a = (x*x)+(r*r);
    if(a<(c*c))
    {

        cout << "Yes";
    }
    else
        {
        cout << "No";
    }


}

