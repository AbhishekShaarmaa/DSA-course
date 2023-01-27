#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    // constructor
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertnode(node *&head, int d)
{
    node *temp = new node(d);

    temp->next = head;
    head = temp;
};

void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
};
// reversing linked list using recursion
void reverse(node *&head , node *curr , node *prev)
{
    // base case 
  if (curr == NULL)
  {
    head = prev;
    return;
  }

  node * forward = curr->next;

   reverse( head , curr, prev );
   curr -> next = prev;



};
node *reverselinklist(node *head)
{
     node *prev = NULL;
     node *curr = head;
     reverse( head , curr, prev);
     return head;
//     if (head==NULL || head->next == NULL)
//     {
//       cout<< head<< endl;
//     }
//     node *prev = NULL;
//     node *curr = head;
//     node *forward = NULL;

//     while (curr != NULL)
//     {
      
//         forward = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = forward;
        
//     }
//    head = prev;
}
int main()
   
    node *node1 = new node(10);

    node *head = node1;
   
   
    insertnode(head, 10);
    insertnode(head, 11);
    insertnode(head, 12);
    insertnode(head, 13);
    print(head);
    reverselinklist(head);
    print(head);

    return 0;
}