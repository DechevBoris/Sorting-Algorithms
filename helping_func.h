#pragma once
#include <iostream>
using namespace std;

void printArray(int arr[], size_t size)
{
    for(size_t i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swap(int *a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
