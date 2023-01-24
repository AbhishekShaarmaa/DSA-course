#include <iostream>
using namespace std;

class abhi
{

    //   creating a node
public:
    int data;
    abhi *next;

    // constructor

    abhi(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertnodeatstart(abhi *&head, int d)
{
    abhi *temp = new abhi(d);
    temp->next = head;
    head = temp;
};

void print(abhi *head)
{
    abhi *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
         temp = temp->next;
    }
    cout << endl;
}



int main()
{
    abhi *node1 = new abhi(10);
    cout << node1->data << endl;

    abhi *head = node1;
    insertnodeatstart(head , 54);
    print (head);
    return 0;

}