#include "../helping_func.h"

void bubbleSort(int arr[], size_t size)
{
    if(size == 0)
    {
        throw "Empty array";
    }
    if(size == 1)
    {
        throw "Array is already sorted";
    }
    for(size_t i = 0; i < size - 1; i++)
    {
        for(size_t j = 0; j < size - 1 - i; j++)
        {
            if(arr[j + 1] < arr[j])
            {
                swap(&arr[j],&arr[j + 1]);
            }
        }
    }
}


int main()
{
    int arr[] = {2, 4, -2, 3};
    try
    {
        bubbleSort(arr, 4);
        printArray(arr, 4);
    }
    catch(const char* msg)
    {
        cerr << msg << endl;
    }

    return 0;
}
