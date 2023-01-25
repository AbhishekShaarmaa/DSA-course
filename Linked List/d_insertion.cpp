#include <iostream>
using namespace std;
class node
{

public:
  int data;
  node *next;
  node *prev;

  // constructor
  node(int data)
  {
    this->data = data;
    this->next = NULL;
    this->prev = NULL;
  }
};

// insertion at start of doubly link list
void insertatstart(node *&head, int d)
{
  node *temp = new node(d);
  temp->next = head;
  head->prev = temp;
  head = temp;
}
// in sertion at end of doubly kinked list
void insertatend(node *&tail, int d)
{
  node *temp = new node(d);

  tail->next = temp;
  temp->prev = temp;
  tail = temp;
}

// insertion at any position in linked list

void insertatanyposition(node *&tail, node *&head, int d, int n)
{

  if (n == 1)
  {
    insertatstart(head, d);
    return;
  }
  else
  {
    node *temp = head;

    int cnt = 1;
    while (cnt < n - 1)
    {
      temp = temp->next;
      cnt++;
    }

    if (temp->next = NULL)
    {
      insertatend(tail, d);

      return;
    }
    else
    {
      node *nodetoinsert = new node(d);

      nodetoinsert->prev=temp;
      nodetoinsert->next=temp->next;
      temp->prev= nodetoinsert;
    }
    temp=temp->next;
  }
}

void print(node *&head)
{
  node *temp = head;

  while (temp != NULL)
  {
    cout << endl;
    cout << temp->prev << " ";
    cout << temp->data << " ";
    cout << temp->next << " ";

    temp = temp->next;
  }

  cout << endl;
}

int main()
{
  node *node1 = new node(10);
  // cout << node1 -> data << endl;
  // cout << node1 -> next << endl;
  // cout << node1 -> prev << endl;

  node *head = node1;

  insertatstart(head, 9);
  insertatstart(head, 2);
  // insertatanyposition(tail, head, 24, 2);
  // insertatanyposition(tail, head, 23, 2);
  // insertatanyposition(tail, head, 22, 2);
  // insertatanyposition(tail, head, 21, 2);
  print(head);

  node *tail = node1;
  insertatend(tail, 4);
  insertatend(tail, 6);
  print(head);

  insertatanyposition(tail, head, 24, 3

  );
  // insertatanyposition(tail, head, 23, 2);
  // insertatanyposition(tail, head, 22, 2);
  // insertatanyposition(tail, head, 21, 2);
  print(head);

  return 0;
}