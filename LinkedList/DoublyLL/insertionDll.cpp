#include <bits/stdc++.h>
using namespace std;

class node
{
public:
     int data;
     node *next;
     node *prev;

     node(int val)
     {
          data = val;
          next = NULL;
          prev = NULL;
     }
};

void insertAtHeadDll(node *&head, int val)
{
     node *n = new node(val);
     n->next = head;
     if (head != NULL)
          head->prev = n;

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
     n->prev = temp;
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
     insertAtHeadDll(head, 69);
     insertAtTailDll(head, 1);
     insertAtTailDll(head, 2);
     insertAtTailDll(head, 3);
     insertAtTailDll(head, 4);
     insertAtTailDll(head, 5);

     display(head);
     return 0;
}