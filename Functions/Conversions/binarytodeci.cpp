#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n){
    int ans = 0;
    int hvalue = 1;

    while(n>0){
        int lastDigit = n%10;
        ans += hvalue*lastDigit;
        hvalue *=2;
        n=n/10;
    }
    return ans;
}

int32_t main()
{

    int n;
    cin>>n;

    cout<<"The Conversion: "<<binaryToDecimal(n);

    return 0;
}