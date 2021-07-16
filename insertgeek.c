#include <stdio.h>

int main()
{

    int arr[100] = { 0 };
    int i, x, pos, n = 10;

    // intial array of size 10
    for (i = 0; i < n; i++){
        arr[i] = i + 1;
    }

    // print the original array of
    for ( i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    // element to be inserted into
    x = 50;

    // postion at which element is to be inserted
    pos = 5;

    // increasse the size by 10
    n++; // increment

    // shift element forward
    for ( i = n - 1; i >= pos; i-- )
    {
        arr[i] = arr[i - 1];
    }
    //insert x at pos 
    arr[pos - 1] = x;

    // print he updated array
    for ( i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}