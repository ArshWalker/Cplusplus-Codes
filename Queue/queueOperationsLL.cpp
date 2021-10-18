#include <iostream>
using namespace std;

class node
{
public:
     int data;
     node *next;

     node(int val)
     {
          data = val;
          next = NULL;
     }
};

class queue
{
     node *front;
     node *back;

public:
     queue()
     {
          front = NULL;
          back = NULL;
     }

     void enqueue(int x)
     {
          node *n = new node(x);
          if (front == NULL)
          {
               back = n;
               front = n;
               return;
          }

          back->next = n;
          back = n;
     }

     void dequeue()
     {
          if (front == NULL)
          {
               cout << "queue underflow!!";
               return;
          }

          node *todelete = front;
          front = front->next;
          delete todelete;
     }

     int peek()
     {
          if (front == NULL)
          {
               cout << "queue underflow!!";
               return -1;
          }
          return front->data;
     }

     bool empty()
     {
          if (front == NULL)
          {
               cout << "queue underflow!!";
               return true;
          }

          return false;
     }
};

int main()
{

     queue q;
     q.enqueue(10);
     q.enqueue(20);
     q.enqueue(30);
     q.enqueue(40);

     q.dequeue();
     cout << q.peek() << endl;
     cout << q.empty() << endl;
     return 0;
}