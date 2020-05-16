#include <iostream>
using namespace std;

typedef struct ringQ
{
    int max, size, front, rear;
    int *arr;
} ringQ;

ringQ *createRingQ(int max)
{
    ringQ *ring = (ringQ *)malloc(sizeof(ringQ));
    ring->arr = (int *)calloc(max, sizeof(int));
    ring->max = max;
    ring->front = 0;
    ring->rear = 0;
    return ring;
}

bool isEmpty(ringQ *ring)
{
}