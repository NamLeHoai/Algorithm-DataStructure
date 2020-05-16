#include <iostream>
using namespace std;

/*

|  |
|  |
|--|
|--|
|--|
|__|

*/

typedef struct dlnode
{
    int data;
    dlnode *prev;
    dlnode *next;
} dlnode;

dlnode *head;

void push(int value)
{
    dlnode *new_node = (dlnode *)malloc(sizeof(dlnode));
    new_node->data = value;

    if (head == NULL)
    {
        new_node->next = head;
        head = new_node;
    }
    else
    {
        //đưa node trước xuông
        head->prev = new_node;
        //push node mới vào
        new_node->next = head;
        new_node->prev = NULL;
        //chuyển head -> node mới
        head = new_node;
    }
}

void pop()
{
    // ctro temp lưu địa chỉ top
    if (head != NULL)
    {
        dlnode *temp = head;
        head = head->next;
        free(temp);
    }
    else
    {
        cout << "stack is empty" << endl;
    }
}

void display()
{
    cout << endl;
    dlnode *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    push(5);
    push(3);
    push(10);
    display();
    pop();
    display();

    return 0;
}
