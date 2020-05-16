#include <iostream>
using namespace std;

typedef struct Node
{
    int data;
    Node *next;
} Node;

int getValueNode()
{
}

int main()
{

    //tao node
    Node *head = new Node();
    head->data = 1;
    head->next = NULL;

    Node *second = new Node();
    second->data = 2;
    second->next = NULL;

    Node *third = new Node();
    third->data = 3;
    third->next = NULL;

    //lket
    head->next = second;
    second->next = third;

    // truy cap
    int data = head->data;
    cout << data << endl;

    Node *p = head;
    while (p->next != NULL)
    {
        data = p->data;
        p = p->next;
        cout << data << " -> ";
        cout << endl;
        cout << p << endl;
        cout << p->data << endl;
    }

    return 0;
}