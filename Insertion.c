#include <stdio.h>

void display(int arr[], int n){

    // Code forTraversal
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int indInsertion(int arr[], int size, int element, int capacity, int index) {
    // Code for Insertion
    if(size>=capacity){
        return -1;
    }

    for(int i = size - 1; i >= index; i--) {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 1;
}


void indDeletion(int arr[], int size, int index) {
    
    //Code for Deletion
    
    for(int i = index; i < size - 1; i++) 
    {
        arr[i] = arr[i+1];
    }

}
int main(){
    int arr[100] = {0,1,2,3,4,5,6,7};
    int size = 8, element =45, index = 3;

    display(arr, size);
    
    // indInsertion(arr, size, element, 100, index);
    // size += 1;
    // display(arr, size);

    indDeletion(arr, size, index);
    size -= 1;
    display(arr, size);

    return 0;
}