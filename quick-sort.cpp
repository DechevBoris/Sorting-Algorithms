#include "../helping_func.h"

int putPivotInOrder(int arr[], int start, int end)
{
    int pivot = arr[end];
    int it = start - 1;
    for(int j = start; j < end; j++)
    {
        if(arr[j] <= pivot)
        {
            it++;
            swap(&arr[it], &arr[j]);
        }
    }
    swap(&arr[++it], &arr[end]);
    return it;
}

void  quickSort(int arr[], int start, int end)
{
    if(start < end)
    {
        int pivot = putPivotInOrder(arr, start, end);
        quickSort(arr, start, pivot - 1);
        quickSort(arr, pivot + 1, end);
    }
}


int main()
{
    int arr[] = {10, 80, 30, 90, 40, 50, 70};

    quickSort(arr, 0, 6);
    printArray(arr, 7);

    return 0;
}
