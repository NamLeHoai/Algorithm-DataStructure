#include <iostream>
using namespace std;

#define SUCCESS 0;
#define OVER_QUEUE 1;
#define EMPTY_QUEUE 2;

typedef struct Queue
{
    int size, front, rear;
    int *array;
} Queue;

Queue *createQueue(int size)
{
    Queue *queue = (Queue *)malloc(sizeof(Queue));
    queue->array = (int *)calloc(size, sizeof(int));
    queue->size = size;
    queue->front = 0;
    queue->rear = 0;
    return queue;
}

bool isEmpty(Queue *queue)
{
    return (queue->front == 0);
}

bool isFull(Queue *queue)
{
    return (queue->rear == queue->size);
}

int enQueue(Queue *queue, int value)
{
    if (isFull(queue))
    {
        return OVER_QUEUE;
    }
    if (isEmpty(queue))
    {
        queue->front = 1;
        queue->rear = 1;
        queue->array[queue->rear] = value;
        return SUCCESS;
    }
    queue->rear += 1;
    queue->array[queue->rear] = value;
    return SUCCESS;
}

int deQueue(Queue *queue)
{
    if (isEmpty(queue))
    {
        return EMPTY_QUEUE;
    }
    int front = queue->array[queue->front];
    queue->array[queue->front] = 0;
    queue->front += 1;
    return SUCCESS;
}

void displayQueue(Queue *queue)
{
    for (int i = queue->front; i < queue->rear + 1; i++)
    {
        cout << queue->array[i] << "  ";
    }
}

int main()
{
    Queue *q = createQueue(10);
    enQueue(q, 20);
    enQueue(q, 10);
    enQueue(q, 50);
    enQueue(q, 30);
    enQueue(q, 99);
    deQueue(q);
    deQueue(q);
    displayQueue(q);
    return 0;
}
