// linked -> it is a type of data structure
//           which consisit  to many nodes
//           nodes contain data and addreass of next node

// why we need linked list?
// 1). it is a dynamic data structure it can grow and shrink in run time
// 2). easy in sertion and deletioin

// types of linked list
// 1). singly linked list
// 1). doubly linked list
// 1). circular linked list
// 1). circular-doubly linked list

// #include <iostream>
// using namespace std;

// class node
// {

// public:
//     int data;
//     node *next;

//     // constructor
//     node(int data)
//     {
//         this->data = data;
//         this->next = ;
//     }
// };

// int main()
// {
//     node *node1 = new node(10);

//     cout << node1->data << endl;
//     cout << node1->next << endl; // The -> (arrow) operator is used to access class, structure or union members using a pointer

//     return 0;
// }

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
// inserting  node at start
void insertnodeatstart(node *&head, int d)
{
    node *temp = new node(d);
    temp->next = head;
    head = temp;
};

// inserting  node at end
void insertnodeatend(node *&tail, int z)
{
    node *temp = new node(z);
    tail->next = temp;
    tail = temp;
};

void print(node  *&head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
};
void printf(node *&tail)
{
    node *temp = tail;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
};

int main()
{
    node *node1 = new node(10);
    cout << node1->data << endl;
    cout << node1->next << endl;

    node *head = node1;
    print(head);

    insertnodeatstart(head, 12);
    insertnodeatstart(head, 18);

    print(head);

    node *tail = node1;
    printf(tail);

    insertnodeatend(tail, 23);
    cout << "print tail"<<endl;
    printf(tail);
 cout << " tail printed"<<endl;
    insertnodeatend(tail, 87);
  cout << tail->data <<endl;
    printf(tail);
    print(head);

    return 0;
}
