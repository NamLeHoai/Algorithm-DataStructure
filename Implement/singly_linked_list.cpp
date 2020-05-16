#include <iostream>
using namespace std;

typedef struct Node
{
    int data;
    Node *next;
} Node;
Node *head;

void push_node(int value)
{
    Node *new_node = (Node *)malloc(sizeof(Node));
    if (head == NULL)
    {
        new_node->data = value;
        new_node->next = NULL;
        head = new_node;
    }
}

//insert new node

// void insert(int value_insert, int value_position)
// {
//     if
// }

void display()
{
    Node *ptr = head;
    while (ptr->next != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}

int main()
{
    push_node(3);
    push_node(5);
    push_node(8);
    push_node(6);
    push_node(4);
    push_node(7);
    display();

    return 0;
}