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

node *reversek(node *&head, int k)
{
     node *prev = NULL;
     node *curr = head;
     node *nextptr;

     node *check;
     check = curr;

     int count = 0;
     while (check->next != NULL && count <= k)
     {
          count++;
          check = check->next;
     }
     if (count < k)
          return head;

     count = 0;

     while (curr->next != NULL && count < k)
     {
          nextptr = curr->next;
          curr->next = prev;

          prev = curr;
          curr = nextptr;
          count++;
     }

     if (nextptr != NULL)
     {
          head->next = reversek(nextptr, k);
     }

     return prev;
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
     // insertAtTail(head, 6);
     display(head);

     int k = 2;
     node *newhead = reversek(head, 2);
     cout << "Reverse LL: ";
     display(newhead);
     return 0;
}