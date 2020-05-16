#include <iostream>

using namespace std;

#define SUCCESS 0
#define INVALID_POSITION 1
#define POSITION_INIT 2
#define POSITION_EMPTY 4
typedef struct CArray
{
    int size;
    int *array;

} CArray;

// initialization array trả về con trỏ kiểu CArray trỏ đến vị trí đầu array
CArray *createArray(int size)
{
    // xin cấp phát vùng nhớ lưu địa chỉ vào con trỏ *arr
    CArray *arr = (CArray *)malloc(sizeof(CArray));
    arr->array = (int *)malloc(size * sizeof(int));
    arr->size = size;
    int i;
    for (i = 0; i < size; i++)
    {
        arr->array[i] = 0;
    }

    return arr;
}

// insert value to array
int insertValueCArray(CArray *arr, int position, int value)
{
    if (position >= 0 && position < arr->size)
    {
        if (arr->array[position] == 0)
        {
            arr->array[position] = value;
            return SUCCESS;
        }
        else
            return POSITION_INIT;
    }
    return INVALID_POSITION;
}

//delete value in array
int deleteValueCArray(CArray *arr, int position)
{
    if (position >= 0 && position < arr->size)
    {
        if (arr->array[position] != 0)
        {
            arr->array[position] = 0;
        }
        else
            return POSITION_EMPTY;
    }
    return INVALID_POSITION;
}

//get value in array
int getValueCArray(CArray *arr, int position)
{
    cout << "address = " << arr->array << endl;
    cout << "value = " << *(arr->array) << endl;
    if (position >= 0 && position < arr->size)
    {
        // return arr->array[position];
        int *p_ptr = arr->array + position;
        cout << "address " << &(arr->array[position]) << endl;
        cout << "address of position " << position << " = " << p_ptr << endl;
        int diff = p_ptr - &arr->array[position];
        cout << "diff " << diff << endl;
        return *p_ptr;
    }
    return INVALID_POSITION;
}

// append value to array
int appendValueCArray(CArray *arr, int value)
{
    arr = (CArray *)realloc(arr, arr->size++);
    // arr->array[arr->size - 1] = value;
    *(arr->array + (arr->size - 1)) = value;
    return SUCCESS;
}

//display array
int displayCArray(CArray *arr)
{
    int i;
    for (i = 0; i < arr->size; i++)
    {
        printf("%d  ", arr->array[i]);
    }
    printf("\n");
    return 0;
}

int main()
{
    CArray *arr = createArray(10);
    displayCArray(arr);
    for (int i = 0; i < arr->size; i++)
    {
        insertValueCArray(arr, i, i + 1);
    }
    displayCArray(arr);
    deleteValueCArray(arr, 12);
    displayCArray(arr);

    //append
    appendValueCArray(arr, 13);
    displayCArray(arr);
    int a = getValueCArray(arr, 4);
    cout << "a = " << a << endl;
    free(arr);
}