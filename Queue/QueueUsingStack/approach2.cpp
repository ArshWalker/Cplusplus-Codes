// Method 2 (By making enQueue operation costly)

#include <bits/stdc++.h>
using namespace std;

class Queue
{
public:
     stack<int> s1;
     stack<int> s2;

     void push(int x)
     {
          while (!s1.empty())
          {
               s2.push(s1.top());
               s1.pop();
          }

          s1.push(x);

          while (!s2.empty())
          {
               s1.push(s2.top());
               s2.pop();
          }
     }

     int pop()
     {
          if (s1.empty())
          {
               cout << "queue is empty!!" << endl;
               return -1;
          }

          int topval = s1.top();
          s1.pop();
          return topval;
     }

     bool empty()
     {
          if (s1.empty() && s2.empty())
          {
               return true;
          }
          return false;
     }
};

int main()
{
     Queue q;
     q.push(1);
     q.push(2);
     q.push(3);
     q.push(4);
     // q.display();
     cout << q.pop() << endl;
     q.push(5);
     cout << q.pop() << endl;
     cout << q.pop() << endl;
     return 0;
}

// Time Complexity:
// Push operation: O(N).
// In the worst case we have empty whole of stack 1 into stack 2.
// Pop operation: O(1).
// Same as pop operation in stack.