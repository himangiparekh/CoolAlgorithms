#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int max(int a, int b){
    int max = (a>=b) ? a : b;
    return max;
}

// int* find_minmax_arr(int A[], int B[], int lenA, int lenB){
//     if(max(lenA, lenB) == lenB){
//         int min_arr[] = B;
//         int len_min = lenB;
//         int max_arr[] = A;
//         int len_max = lenA;
//     }
//     else{
//         int min_arr[] = A;
//         int len_min = lenA;
//         int max_arr[] = B;
//         int len_max = lenB;
//         return len_min, len_max, min_arr, max_arr;
//     }
// }

int* make_equal_len(int A[], int B[], int lenA, int lenB){

    int *newA = (int*)malloc(lenB * sizeof(int));

    int zeroes_in_A = lenB - lenA;

    for(int i = 0; i < zeroes_in_A; i++){
        newA[i] = 0;
    }
    for(int i = zeroes_in_A; i < lenA; i++){
        newA[i] = A[i];
    }

    // int *A = (int*)malloc(lenB * sizeof(int));

    // for(int i = 0; i < lenB; i++){
    //     A[i] = newA[i];
    // }

    // int A = newA;

    // free(newA); 

    return newA;
}

int* binary_sum(int A[], int B[], int lenA, int lenB){
    int c;
    for(int i = 0; i < max(lenA, lenB); i++){
        c = c + (A[i] + pow(2, i));
    }

    // int C[max(lenA, lenB)];
    int * C = (int *) malloc((max(lenA, lenB)+1) * sizeof(int));
    int carry = 0;
    int j;
    for(int j = max(lenA, lenB)-1; j > 0; j--){

        if (lenA != lenB){
            if(lenB > lenA){
                A = make_equal_len(A, B, lenA, lenB);
            }
            else{
                B = make_equal_len(B, A, lenB, lenA);
            }
        }
        
        if((A[j] + B[j] + carry) == 3){
            C[j] = 1;
            carry = 1;
        }

        if((A[j] + B[j] + carry) == 2){
            C[j] = 0;
            carry = 1;
        }

        if((A[j] + B[j] + carry) == 1){
            C[j] = 1;
            carry = 0;
        }
        
        else{
            C[j] = 0;
            carry = 0;
        }
        
    }

    if((carry == 1) && (C[j] == 1)){
        C[j-1] = 1;
    }

    return C;
}