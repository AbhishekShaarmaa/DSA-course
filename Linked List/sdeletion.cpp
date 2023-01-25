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
void deletenodeatposition(abhi *&head,  int n)
{
//    deletion at first position
    if (n == 1)
    {
        abhi *temp = head;
        head = temp->next;
    }
// deletion at any position and last position
    else
    {
        abhi *curr = head;
        abhi *prev = NULL;

        int cnt = 1 ;
        while (cnt < n)

        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        prev->next = curr->next;
    }
}
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
    // cout << node1->data << endl;

    abhi *head = node1;
    insertnodeatstart(head, 54);
    insertnodeatstart(head, 55);
    insertnodeatstart(head, 59);
    insertnodeatstart(head, 56);
    insertnodeatstart(head, 50);
    deletenodeatposition(head , 1);
    print(head);
    return 0;
}