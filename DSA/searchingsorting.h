#include <stdio.h>

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

int quicksortpartition(int A[], int lb, int ub){
    int start = lb;
    int end = ub;
    int pivot = A[lb];

    while(start < end){
        
        while(A[start] <= pivot && start < end){
            start++;
        }

        while(A[end] > pivot){
            end--;
        }

        if (start < end) {
            int temp = A[start];
            A[start] = A[end];
            A[end] = temp;
        }
 
    }

    int temp = A[lb];
    A[lb] = A[end];
    A[end] = temp;

    return end;

}

void quicksort(int A[], int lb, int ub){
    
    if(lb < ub){
        int loc = quicksortpartition(A, lb, ub);
        quicksort(A, lb, loc-1);
        quicksort(A, loc+1, ub);
    }

}

void linear_search(int A[], int n, int key){
    int found;
    for(int i=0; i<n; i++){
        found = 0;
        if(A[i] == key){
            printf("Key found at index: %d\n", i);
            int found = 1;
        }
    }
    
    if(found != 1){
        printf("Key not found! \n");
    }
}

void binary_search(int A[], int l, int n, int key){

    int lb, ub;
    quicksort(A, lb, ub);

    while(l <= n){
        int mid = (l+n)/2;

        if(key == A[mid]){
            printf("Key found at index: %d\n", mid+1);
            return;
        }

        else if(key < A[mid]){
            n = mid - 1;
        }

        else if(key > A[mid]){
            l = mid + 1;
        }

    } 
    
    printf("Key not found!");

}

void printarray(int A[], int len){

    printf("Sorted array: ");
    for(int i=0; i<len; i++){
        printf("%d ", A[i]);
    }
    printf("\n");

}