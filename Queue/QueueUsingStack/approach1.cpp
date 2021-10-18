// Method 1 (By making deQueue operation costly)

#include <bits/stdc++.h>
using namespace std;

class Queue
{
public:
     stack<int> s1;
     stack<int> s2;

     void push(int x)
     {
          s1.push(x);
     }

     int pop()
     {
          if (s1.empty() && s2.empty())
          {
               cout << "queue is empty!!" << endl;
               return -1;
          }

          if (s2.empty())
          {
               while (!s1.empty())
               {
                    s2.push(s1.top());
                    s1.pop();
               }
          }

          int topval = s2.top();
          s2.pop();
          return topval;

          while (!s2.empty())
          {
               s1.push(s2.top());
               s2.pop();
          }
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
     return 0;
}

// Time Complexity:
// Push operation: O(1).
// Same as pop operation in stack.
// Pop operation: O(N).
// In the worst case we have empty whole of stack 1 into stack 2