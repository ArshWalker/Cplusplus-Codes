#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the n: ";
    cin>>n;

    int reverse=0;
    while(n>0){
        int lastDigit= n%10;
        reverse = reverse*10 + lastDigit;
        n=n/10;
    }

    cout<<"The Reverse of a no. : "<<reverse<<endl;


    return 0;
}