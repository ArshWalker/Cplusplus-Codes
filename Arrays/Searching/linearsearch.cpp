#include<bits/stdc++.h>

using namespace std;

int linearSearch(int arr[], int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i] == key)
            return i;
    }
    return -1;
}

int32_t main()
{
    int n;
    cin>>n;
    int key;
    cin>>key;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<linearSearch(arr,n,key);


    return 0;
}