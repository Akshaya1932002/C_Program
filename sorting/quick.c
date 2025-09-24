#include <stdio.h>

// Function to swap two elements
void swap(int *x, int *y) 
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Partition function (arrange elements around pivot)
int partition(int arr[], int low, int high) 
{
    int pivot = arr[high];   // choose last element as pivot
    int a = low - 1;         // index of smaller element

    for (int b = low; b < high; b++) 
    {
        if (arr[b] < pivot) 
        {
            a++;
            swap(&arr[a], &arr[b]);  // put smaller element on left
        }
    }
    swap(&arr[a + 1], &arr[high]);  // place pivot in correct position
    
    return a + 1;  // return pivot index
}

// Quick Sort function
void quickSort(int arr[], int low, int high) 
{
    if (low < high) 
    {
        int pi = partition(arr, low, high); // find pivot position

        quickSort(arr, low, pi - 1);  // sort left side
        quickSort(arr, pi + 1, high); // sort right side
    }
}

int main() 
{
    int arr[6] = {340, 1, 10, 150, 240, 2};
    int count = 6;

    printf("Original array: ");
    for (int i = 0; i < count; i++) 
    {
        printf("%d ", arr[i]);
    }

    quickSort(arr, 0, count - 1);  // call quick sort

    printf("\nSorted array: ");
    for (int i = 0; i < count; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
