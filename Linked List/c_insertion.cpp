#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    // contructor
    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

void insertatstart(node *&tail, int element, int d)
{

    if (tail == NULL)
    {
        node *newnode = new node(d);
        tail->next = newnode;
        newnode = tail;
        return;
    }
    else
    {
        // assuming element is present in our circular list
        node *curr = tail;

        while (curr->next != NULL)
        {
            curr = curr->next;
           
        }

        node *temp = new node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}
void print(node *tail)
{
    node *temp = tail;
    if (tail==NULL)
    {
    cout << "list is empty"<<endl;
    return ; 
    }
    
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail->next != temp);
    cout << endl;
}

int main()
{
    node *tail = NULL;

    insertatstart(tail, 0, 6);
    print(tail);

    return 0;
}