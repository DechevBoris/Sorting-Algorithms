#include "../helping_func.h"

void selectionSort(int arr[], size_t size)
{
    if(size == 0)
    {
        throw "Empty array";
    }
    if(size == 1)
    {
        throw "Array is already sorted";
    }
    size_t minIndex;
    for(size_t i = 0; i < size - 1; i++)
    {
        minIndex = i;
        //iterate through the unsorted part of the array
        for(size_t j = i + 1; j < size; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        //swap the minimum element in the unsorted part with the first element
        swap(&arr[minIndex], &arr[i]);
    }
}


int main()
{
    int arr[10] = {0, 3, 1, 2, -2, 50, -100, 0, 8, 9};
    try
    {
        selectionSort(arr, 10);
        printArray(arr, 10);
    }
    catch(const char* msg)
    {
        cerr << msg << endl;
    }

    return 0;
}
