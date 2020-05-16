#include <iostream>
using namespace std;

#define SUCCESS 0;
#define INVALID_POSITION 1;
#define POSITION_EMPTY 2;
#define POSITION_INIT 3;

typedef struct CArray
{
    int *array;
    int size;
} CArray;

//function create CArray

CArray createCArray(CArray *arr, int size)
{
    //cấp phát vùng nhớ lưu con trỏ CArray
    CArray *arr = (CArray *)malloc(sizeof(CArray));
    //lưu địa chỉ mảng vào con trỏ
    arr->array = (int *)malloc(sizeof(int) * size);
    arr->size = size;
    for (int i = 0; i < size; i++)
    {
        arr->array[i] = 0;
    }

    return arr;
}
//function insertToCArray

int insertToCArray(CArray *arr, int position, int value)
{
    
    if (position >= 0 && position < arr->size)
    {
        if (arr->array[position] == 0)
        {
            arr->array[position] = value;
            return SUCCESS;
        }
        else
        {
            return POSITION_INIT;
        }
    }
    return INVALID_POSITION;
}

//function deleteElementInCArray
int deleteValueCArray(CArray *arr, int position)
{
    if (position >= 0 && position < arr->size)
    {
        if (arr->array[position] != 0)
        {
            arr->array[position] = 0;
        }
        else
        {
            return POSITION_INIT;
        }
    }
    return INVALID_POSITION;
}

//function editValueCArray
int editValueCArray(CArray *arr, int position, int value) {
    if (position >= 0 && position < arr->size)
    {
        if (/* condition */)
        {
            /* code */
        }
        
    }
    
}

int main()
{
    return 0;
}