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

void deleteAtHead(node *&head)
{
     node *todelete = head;
     head = head->next;
     delete todelete;
}

//Searching for element to delete
void deletion(node *&head, int val)
{

     // linked list is empty
     if (head == NULL)
     {
          return;
     }

     // if only one element is at head
     if (head->next == NULL)
     {
          deleteAtHead(head);
          return;
     }

     node *temp = head;

     while (temp->next != NULL && temp->next->data != val)
     {

          temp = temp->next;
     }

     if (temp->next == NULL)
     {
          cout << "\nGiven node is not present in Linked List" << endl;
          cout << "The Unchanged List: ";
          return;
     }
     node *todelete = temp->next;
     temp->next = temp->next->next;

     delete todelete; // for memory mangement
}

// print the list

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
     display(head);
     insertAtHead(head, 69);
     display(head);

     deletion(head, 5);
     display(head);
     deleteAtHead(head);
     display(head);
     return 0;
}