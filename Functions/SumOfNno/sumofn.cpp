#include<bits/stdc++.h>

using namespace std;

int sum(int n){
    int ans=0;
    for(int i=1;i<=n;i++){
        ans += i;
    }
    return ans;
}

int32_t main()
{
    int n;
    cout<<"enter the n: ";
    cin>>n;

    cout<<"The sum : "<<sum(n);

    return 0;
}