#include<iostream>
using namespace std;
int fardin(int data)
{
    if(data==1)
    {
        return 6;
    }
    else if(data==2)
    {
        return 5;
    }
    else if(data==3)
    {
        return 4;
    }
    else if(data==4)
    {
        return 3;
    }
    else if(data==5)
    {
        return 2;
    }
    else
    {
        return 1;
    }

}

int main()
{
    int a,b,c;
    cin >> a >> b >>c;
    int sum=fardin(a)+fardin(b)+fardin(c);
    cout<<sum;
}

