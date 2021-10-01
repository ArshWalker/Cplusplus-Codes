#include <bits/stdc++.h>
using namespace std;

class node
{
public:
     int data;
     node *next;
     node *random;

     node(int val)
     {
          data = val;
          next = NULL;
          random = NULL;
     }
};

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

node *duplicate(node *head)
{
     node *curr = head;

     while (curr != NULL)
     {
          node *temp = curr->next;
          curr->next = new node(curr->data);
          curr->next->next = temp;
          curr = temp;
     }
     curr = head;

     while (curr != NULL)
     {
          if (curr->next != NULL)
          {
               curr->next->random = (curr->random != NULL) ? curr->random->next : NULL;
          }
          curr = curr->next->next;
     }

     node *org = head;
     node *copy = head->next;
     node *temp = copy;

     while (org != NULL)
     {
          org->next = org->next->next;
          copy->next = (copy->next != NULL) ? copy->next->next : copy->next;

          org = org->next;
          copy = copy->next;
     }
     return temp;
}

void display(node *head)
{
     node *temp = head;
     while (temp != NULL)
     {
          cout << "Data = " << temp->data << ", Random = " << temp->random->data << endl;
          temp = temp->next;
     }
     // cout << "NULL" << endl;
}

int main()
{
     node *head = NULL;
     insertAtTail(head, 1);
     insertAtTail(head, 2);
     insertAtTail(head, 3);
     insertAtTail(head, 4);
     insertAtTail(head, 5);

     // 1's random points to 3
     head->random = head->next->next;

     // 2's random points to 1
     head->next->random = head;

     // 3's and 4's random points to 5
     head->next->next->random =
         head->next->next->next->next;
     head->next->next->next->random =
         head->next->next->next->next;

     // 5's random points to 2
     head->next->next->next->next->random =
         head->next;

     cout << "The Orginal: " << endl;
     display(head);

     cout << "Cloned list: " << endl;
     node *cloned = duplicate(head);
     display(cloned);

     return 0;
}