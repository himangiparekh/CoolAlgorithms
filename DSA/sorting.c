#include <stdio.h> // Include standard input/output library

void bubble_sort(int A[], int n){
        
    int i, j;
        for(i=0; i<n-1; i++){
            for(j=0; j<n-i-1; j++){

                if(A[j] > A[j+1]) {
                    int temp = A[j+1];
                    A[j+1] = A[j];
                    A[j] = temp;
                }

            }
        }

}

void insertion_sort(int A[], int n){

    for(int i=0; i<n-1; i++){
        int j = i+1;
        while (j>0 && (A[j] < A[j-1])){
            
            int temp = A[j];
            A[j] = A[j-1];
            A[j-1] = temp;
            j--;
        }
    }
}

void min(int A[], int n){
    
    for(int j=0; j<n-1; j++){
        int min = j;
        if(A[j+1] > A[min]){
            int temp = A[min];
            A[min] = A[j+1];
            A[j+1] = temp;
            min = j+1;
        }

        if(j==n-2){
            printf("%d\n", A[min]);
        }

    }
}

void selection_sort(int A[], int n){
    int i,j;
    for(i=-1; i<n-1; i++){
        for(int j=0; j<n-1; j++){
            if(A[j+1] < A[j]){
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
  
    }
}

void quicksort(int A[], int n){
    
}

int main() { 

    int arr[9] = {34,524,1245,23,9,7,34,56,24}; // defining unsorted array
    
    int len = sizeof(arr) / sizeof(arr[0]);

    // bubble_sort(arr, len);
    // insertion_sort(arr, len);
    // min(arr, len);
    // selection_sort(arr, len);


    printf("Sorted array: ");
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;

}




