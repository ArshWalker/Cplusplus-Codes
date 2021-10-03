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

     if (head == NULL)
     {
          n->next = n;
          head = n;
          return;
     }

     node *temp = head;

     while (temp->next != head)
     {
          temp = temp->next;
     }

     temp->next = n;
     n->next = head;
     head = n;
}

void insertAtTail(node *&head, int val)
{

     node *n = new node(val);

     if (head == NULL)
     {
          insertAtHead(head, val);
          return;
     }

     node *temp = head;
     while (temp->next != head)
     {
          temp = temp->next;
     }

     temp->next = n;
     n->next = head;
}

void deleteAtHead(node *&head)
{
     node *temp = head;

     while (temp->next != head)
     {
          temp = temp->next;
     }
     node *todelete = head;
     temp->next = head->next;
     head = head->next;

     delete todelete;
}

void deletion(node *&head, int pos)
{

     if (head == NULL)
     {
          return;
     }

     if (pos == 1)
     {
          deleteAtHead(head);
     }

     node *temp = head;

     while (temp->next != NULL && temp->next->data != pos)
     {
          temp = temp->next;
     }

     node *todelete = temp->next;
     temp->next = temp->next->next;

     delete todelete;
}

void display(node *head)
{
     node *temp = head;

     do
     {
          cout << temp->data << "->";
          temp = temp->next;
     } while (temp != head);

     cout << endl;
}

int main()
{
     node *head1 = NULL;
     insertAtTail(head1, 1);
     insertAtTail(head1, 4);
     insertAtTail(head1, 5);
     insertAtTail(head1, 7);
     insertAtTail(head1, 2);
     insertAtTail(head1, 3);
     insertAtTail(head1, 6);

     display(head1);

     insertAtHead(head1, 69);
     display(head1);

     deletion(head1, 6);
     display(head1);
     deleteAtHead(head1);
     display(head1);
     return 0;
}