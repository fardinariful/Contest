#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,c,total1=0,total2=0,total3=0;
    cin>>n;
    int arr[3][n];

    for(int i=0; i<n; i++){
        cin>>a>>b>>c;
        arr[0][i] = a;
        total1+=arr[0][i];
        arr[1][i] = b;
        total2+=arr[1][i];
        arr[2][i] = c;
        total3+=arr[2][i];

    }
    if((total1==0) && (total2==0) && (total3==0)){
        cout << "YES";
    }
    else{
        cout << "NO";
    }




}
