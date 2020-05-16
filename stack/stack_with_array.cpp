#include <iostream>
using namespace std;

struct Stack
{
    int size;
    CArray *array;
} Stack;

Stack *createStack(int size)
