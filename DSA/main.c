#include <stdio.h> // Include standard input/output library
#include "searchingsorting.h"

int main() { 

    int arr[9] = {34,524,1245,23,9,7,34,56,24}; // defining unsorted array
    
    int len = sizeof(arr) / sizeof(arr[0]);

    // bubble_sort(arr, len);
    // insertion_sort(arr, len);
    // min(arr, len);
    // selection_sort(arr, len);
    // quicksort(arr, 0, len-1);

    // linear_search(arr, len, 2431);
    // binary_search(arr, 0, len-1, 24);

    printf("Sorted array: ");
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;

}




