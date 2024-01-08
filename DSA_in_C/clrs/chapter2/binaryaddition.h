// 2.1-5
#include <stdlib.h>
#include <stdio.h>
#include "/Users/himangiparekh/CoolAlgorithms/DSA_in_C/searchingsorting.h"

int * shift_right(int A[], int n, int lenA){

    int lena = lenA + n;
    int * a = (int *) malloc(lena * sizeof(int));

    for(int i = 0; i < lena; i++){
        a[i] = 0;
    }

    for(int i = 0; i < lena; i++){
        a[i + n] = A[i];
    }

    return a;
}

int * add_binary_integers(int A[], int B[], int lenA, int lenB){

    int n; 
    int * newA;
    int * newB;

    if(lenA == lenB){
        newA = shift_right(A, 1, lenA);
        newB = shift_right(B, 1, lenB);
        n = lenA + 1;
    }
    else if(lenA > lenB){
        newA = shift_right(A, 1, lenA);
        newB = shift_right(B, 1 + (lenA-lenB), lenB);
        n = lenA + 1;
    }
    else {
        newA = shift_right(A, 1+ (lenB-lenA), lenA);
        newB = shift_right(B, 1, lenB);
        n = lenB + 1;
    }

    int * result = (int *) malloc( n * sizeof(int));

    int C_in = 0;
    for(int i = n-1; i >= 0; i--){
        if(newA[i] + newB[i] + C_in == 0){
            result[i] = 0;
            C_in = 0;
        }
        else if(newA[i] + newB[i] + C_in == 1){
            result[i] = 1;
            C_in = 0;
        }
        else if(newA[i] + newB[i] + C_in == 2){
            result[i] = 0;
            C_in = 1;
        }
        else if(newA[i] + newB[i] + C_in == 3){
            result[i] = 1;
            C_in = 1;
        }
    }

    return result;
} 

