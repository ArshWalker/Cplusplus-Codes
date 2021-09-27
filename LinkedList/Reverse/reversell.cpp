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

void insertAtHead(node *&head, int val)
{
     node *n = new node(val);
     n->next = head;
     head = n;
}

void insertAtTail(node *&head, int val)
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

node *reverse(node *&head)
{
     node *prev = NULL;
     node *curr = head;
     node *nextptr;

     while (curr != NULL)
     {
          nextptr = curr->next;
          curr->next = prev;

          prev = curr;
          curr = nextptr;
     }
     return prev;
}

node *reverseRecurcive(node *&head)
{
     if (head == NULL || head->next == NULL)
     {
          return head;
     }

     node *newhead = reverseRecurcive(head->next);

     head->next->next = head;
     head->next = NULL;

     return newhead;
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
     insertAtTail(head, 1);
     insertAtTail(head, 2);
     insertAtTail(head, 3);
     insertAtTail(head, 4);
     insertAtTail(head, 5);
     display(head);
     // insertAtHead(head, 69);
     // display(head);

     /* 
          Iterative
     */

     // node *newhead = reverse(head);
     // cout << "Reverse LL using Iterative: ";
     // display(newhead);

     /* 
          Recursive
     */

     node *newhead = reverseRecurcive(head);
     cout << "Reverse LL using Recursive: ";
     display(newhead);
     return 0;
}