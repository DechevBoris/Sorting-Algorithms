#include "../helping_func.h"

void merge(int arr[], size_t left, size_t middle, size_t right)
{
    size_t fstSize = middle - left + 1;
    size_t sndSize = right - middle;

    int fst[fstSize], snd[sndSize];

    for(size_t i = 0; i < fstSize; i++)
    {
        fst[i] = arr[left + i];
    }
    for(size_t i = 0; i < sndSize; i++)
    {
        snd[i] = arr[middle + i + 1];
    }

    size_t it1 = 0, it2 = 0, itSorted = left;
    while(it1 < fstSize && it2 < sndSize)
    {
        if(fst[it1] <= snd[it2])
        {
            arr[itSorted] = fst[it1];
            it1++;
        }
        else
        {
            arr[itSorted] = snd[it2];
            it2++;
        }
        itSorted++;
    }

    while(it1 < fstSize)
    {
        arr[itSorted++] = fst[it1++];
    }
    while(it2 < sndSize)
    {
        arr[itSorted++] = snd[it2++];
    }
}

void mergeSort(int arr[], size_t left, size_t right)
{
    if(left < right)
    {
        int middle = (left  + right) / 2;
        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);
        merge(arr, left, middle, right);
    }
}

int main()
{
    int arr[] = {4, 2, 3, 5, 1, 0, 3};
    mergeSort(arr, 0, 6);
    printArray(arr, 7);

    return 0;
}
