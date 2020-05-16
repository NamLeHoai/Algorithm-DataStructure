#include <iostream>
using namespace std;

typedef struct node
{
    int data;
    node *next;
} node;

node *top = NULL;

bool isEmpty(node *top)
{
    return (top == NULL);
}

void push(int value)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->data = value;
    temp->next = top;
    top = temp;
}

void pop()
{
    if (top->next == NULL)
    {
        cout << "stack is empty" << endl;
    }
    node *temp = top;
    top = top->next;
    free(temp);
}

void view_top()
{
    if (!isEmpty(top))
    {
        cout << top->data << endl;
    }
    else
    {
        cout << "stack is empty" << endl;
    }
}

void display()
{
    node *p = top;
    while (p != NULL)
    {
        cout << p->data << "  ";
        p = p->next;
    }
}

int main()
{
    push(5);
    push(2);
    push(8);
    pop();
    view_top();
    display();

    return 0;
}
