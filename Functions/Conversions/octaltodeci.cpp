#include<bits/stdc++.h>
using namespace std;

int octalToDecimal(int n){
    int ans = 0;
    int hvalue = 1;

    while(n>0){
        int lastDigit = n%10;
        ans += hvalue*lastDigit;
        hvalue *=8;
        n=n/10;
    }
    return ans;
}

int32_t main()
{

    int n;
    cin>>n;

    cout<<"The Conversion: "<<octalToDecimal(n);

    return 0;
}