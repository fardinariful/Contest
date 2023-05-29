#include <iostream>
using namespace std;
int main()
{
    int a;
    int sum;
   cin >>a;
   sum=a*1.08;
if(sum<206)
    {
cout << "Yay!";
}
else if(sum>206)
    {
cout << ":(";
    }
else if(sum==206)
    {
cout << "so-so";
}


}
