#include<iostream>
using namespace std;


void fibonacci(int n){
    int t1 = 0;
    int t2 = 1;

    int nextTerm;

    cout<<"The First "<<n<<" Fibonacci no. : ";
    for(int i=1;i<=n;i++){
        cout<<t1<<" ";
        nextTerm = t1+t2;
        t1=t2;
        t2=nextTerm;
    }
}

int main()
{
    int n;
    cout<<"Enter the n: ";
    cin>>n;

    fibonacci(n);

    return 0;
}