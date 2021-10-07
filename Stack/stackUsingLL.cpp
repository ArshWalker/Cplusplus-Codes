#include <bits/stdc++.h>
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

class Stack
{
public:
     node *head;

     Stack()
     {
          head = NULL;
     }
     void push(int val);
     void pop();
     int Top();
     bool empty();
};
void push(Stack &s, int val)
{
     node *temp = new node(val);
     if (temp == NULL)
     {
          cout << "not able to push";
          return;
     }
     temp->next = s.head;
     s.head = temp;
}

void pop(Stack &s)
{
     if (s.head == NULL)
     {
          cout << "underflow!";
          return;
     }
     node *todelete = s.head;
     s.head = s.head->next;

     delete todelete;
}

int Top(Stack s)
{
     if (s.head == NULL)
     {
          cout << "no element";
          return -1;
     }
     cout << "Top Element: ";
     return (s.head->data);
}

bool empty(Stack s)
{
     cout << "IS EMPTY? ";
     return s.head == NULL;
}

void display(Stack s)
{
     cout << "Elements in Stack: ";
     while (s.head != NULL)
     {
          cout << s.head->data << "->";
          s.head = s.head->next;
     }
     cout << "NULL" << endl;
}

int main()
{
     Stack s;
     push(s, 1);
     push(s, 2);
     push(s, 3);
     push(s, 4);

     display(s);
     cout << Top(s) << endl;
     pop(s);
     pop(s);
     cout << Top(s) << endl;

     display(s);
     pop(s);
     pop(s);
     cout << empty(s) << endl;

     return 0;
}