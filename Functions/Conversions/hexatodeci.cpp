#include<bits/stdc++.h>
using namespace std;

int hexaToDecimal(string n){
    int ans = 0;
    int hvalue = 1;
    int s = n.size();

    for(int i=s-1;i>=0;i--){
        if(n[i] >= '0' && n[i] <= '9'){
            ans += hvalue*(n[i] - '0');
        }

        else if(n[i] >= 'A' && n[i] <= 'F'){
             ans += hvalue*(n[i] - 'A' + 10);
        }

        hvalue *= 16;
    }
    return ans;
}

int32_t main()
{

    string n;
    cin>>n;

    cout<<"The Conversion: "<<hexaToDecimal(n);

    return 0;
}