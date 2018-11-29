#include "../helping_func.h"

void insertionSort(int arr[], size_t size)
{
    if(size == 0)
    {
        throw "Empty array";
    }
    if(size == 1)
    {
        throw "Array is already sorted";
    }
    int save;
    for(size_t i = 1; i < size; i++)
    {
        save = arr[i];
        size_t it = i - 1;
        while(it >= 0 && arr[it] > save)
        {
            swap(&arr[it], &arr[it + 1]);
            if(it == 0)
                break;
            it--;
        }
    }
}

int main()
{
    int arr[] = {-1, 0, 2, 4, -2, 3, 0};
    try
    {
        insertionSort(arr, 7);
        printArray(arr, 7);
    }
    catch(const char* msg)
    {
        cerr << msg << endl;
    }

    return 0;
}
