#include<bits/stdc++.h>
using namespace std;

int decimalToBinary(int n){
    int ans = 0;
    int x=1;

    while(x<=n){
        x *=2;
    }
    x/=2;

    while(x>0){
        int lastDigit= n/x;
        n -= lastDigit*x;
        x/=2;
        ans = ans*10 + lastDigit;
    }
    return ans;
}

int32_t main()
{

    int n;
    cin>>n;

    cout<<"The Conversion: "<<decimalToBinary(n);

    return 0;
}