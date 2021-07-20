#include <stdio.h>

int linearSearch(int arr[], int size, int element)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size - 1;

    while( low <= high)
    {
        mid = (low + high)/2;
        if(arr[mid] == element)
            {
                return mid;
            }
        if(arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return element;
}

int main()
{   
    //Unsorted array for linear search
    // int arr[] = {0, 1, 2, 3, 4, 5, 99,88,22, 15, 34, 94, 10};
    // int size = sizeof(arr)/sizeof(int);


    // Sorted array for binary search
    int arr[] = {0, 1, 2, 3, 4, 5, 99,88,255, 444, 485};
    int size = 11;
    int element = 88;
    int searchIndex = binarySearch(arr, size, element);
    printf("The element %d was found at index %d \n", element, searchIndex);
    return 0;
}