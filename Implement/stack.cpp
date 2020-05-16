#include <iostream>
#include <string>
using namespace std;

int current_size = -1;
const MAX_SIZE = 100;
int stack[MAX_SIZE];

//kiem tra rong
bool isEmpty()
{
    return (current_size == -1);
}

bool isFull()
{
    return (current_size == MAX_SIZE);
}

void push(int data)
{ // them du lieu vao stack
    if (!isFull())
    {
        current_size++;
        stack[current_size] = data;
    }
    else
    {
        cout << "stack is full!" << endl;
    }
}

void top()
{ //lay ra top nhung k xoa
    if (!isEmpty())
    {
        int data = stack[current_size];
        return data;
    }
    else
    {
        cout << "stack is empty!" << endl;
    }
}

void pop()
{ //lay ra top va xoa khoi stack
    if (!isEmpty())
    {
        int data = stack[current_size];
        current_size--;
        return data;
    }
    else
    {
        cout << "stack is empty!" << endl;
    }
}
int main()
{
    push(100);
    push(-300);
    push(-14);
    cout << "top: " << top() << endl;
    pop();
    cout << "top: " << top() << endl;
    while (!isEmpty())
    {
        int data = pop();
        cout << data << " <--";
    }

    return 0;
}