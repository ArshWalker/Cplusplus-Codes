#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the n: ";
    cin>>n;

    int fact=1;
    for(int i=2;i<=n;i++){
        fact = fact *i;
    }

    cout<<"The Factorial of a "<<n<<" is "<<fact;

    return 0;
}