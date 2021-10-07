#include <bits/stdc++.h>
using namespace std;

#define n 100

class Stack
{
     int *a;
     int top;

public:
     Stack()
     {
          a = new int[n];
          top = -1;
     }

     void push(int x)
     {
          if (top == n - 1)
          {
               cout << "stack overflow!";
               return;
          }
          top++;
          a[top] = x;
     }

     void pop()
     {
          if (top == -1)
          {
               cout << "stack underflow!";
               return;
          }

          top--;
     }

     int Top()
     {
          if (top == -1)
          {
               cout << "No element in stack!";
               return -1;
          }
          cout << "The Top element: ";
          return a[top];
     }

     bool empty()
     {
          return top == -1;
     }
};

int main()
{
     Stack s;

     s.push(1);
     s.push(2);
     s.push(3);
     s.push(4);
     cout << s.Top() << endl;
     s.pop();
     cout << s.Top() << endl;
     s.pop();
     s.pop();
     s.pop();
     cout << s.empty() << endl;
     return 0;
}