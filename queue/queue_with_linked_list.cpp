#include <iostream>
using namespace std;

#define SUCCESS 0;
#define EMPTY_QUEUE 1;

typedef struct Node
{
    int data;
    Node *next;
} Node;
Node *head = NULL;
Node *front = NULL;
Node *rear = NULL;

Node *createNode()
{
    Node *temp = (Node *)malloc(sizeof(Node *));
    return temp;
}

void enQueue(Node *front, Node *rear, int value)
{
    Node *temp = createNode();
    cout << "nhap vao gia tri" << endl;
    cin >> temp->data;
    temp->next = NULL;
    if (front == NULL)
    {
        front = temp;
        rear = temp;
    }
    else
    {
        rear->next = temp;
        rear = temp;
    }
}

int deQueue(Node *front, Node *rear)
{
    if (front == NULL)
    {
        cout << "queue is empty" << endl;
        return EMPTY_QUEUE;
    }
    // if (front == rear )
    // {
    //     /* code */
    // }

    Node *temp = front;
    int data = front->data;
    front = front->next;
    free(temp);
    return SUCCESS;
}

int main()
{
    return 0;
}