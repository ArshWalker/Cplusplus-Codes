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

void insertAtHeadDll(node *&head, int val)
{
     node *n = new node(val);
     n->next = head;

     head = n;
}

void insertAtTailDll(node *&head, int val)
{
     node *n = new node(val);

     if (head == NULL)
     {
          head = n;
          return;
     }

     node *temp = head;

     while (temp->next != NULL)
     {
          temp = temp->next;
     }
     temp->next = n;
}

int length(node *head)
{
     int l = 0;
     node *temp = head;

     while (temp != NULL)
     {
          l++;
          temp = temp->next;
     }
     return l;
}

node *kappend(node *&head, int k)
{

     node *newTail;
     node *newHead;
     node *tail = head;

     int l = length(head);
     k = k % l;
     int count = 1;

     // if (l <= k)
     //      return head;

     while (tail->next != NULL)
     {
          if (count == l - k)
               newTail = tail;
          if (count == l - k + 1)
               newHead = tail;

          tail = tail->next;
          count++;
     }

     newTail->next = NULL;
     tail->next = head;

     return newHead;
}

void display(node *head)
{
     node *temp = head;

     while (temp != NULL)
     {
          cout << temp->data << "->";
          temp = temp->next;
     }
     cout << "NULL" << endl;
}

int main()
{

     node *head = NULL;
     insertAtTailDll(head, 1);
     insertAtTailDll(head, 2);
     insertAtTailDll(head, 3);
     insertAtTailDll(head, 4);
     insertAtTailDll(head, 5);
     insertAtTailDll(head, 6);

     display(head);

     node *newHead = kappend(head, 3);
     display(newHead);
     return 0;
}