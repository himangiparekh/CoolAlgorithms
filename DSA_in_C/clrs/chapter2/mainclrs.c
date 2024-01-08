#include <stdio.h>
#include <stdlib.h>
#include "binaryaddition.h"
// #include "/Users/himangiparekh/CoolAlgorithms/DSA_in_C/searchingsorting.h"

int main(){

    int arr[9] = {378, 914, 10101929, 21, 23432, 123, 2134, -5, 892}; // defining initial array

    int a[] = {1,0,1,1,0,1,0,1,1,1,1,1,1,1,1,1,1};
    int b[] = {1,1,0,1,0,1,0,1,1,1,1,1,1,1};

    int lenA = sizeof(a) / sizeof(a[0]);
    int lenB = sizeof(b) / sizeof(b[0]);

    int * C = add_binary_integers(a, b, lenA, lenB);

    int lenC;
    
    if(lenA == lenB){
        lenC = lenA + 1;
    }
    else if(lenA > lenB){
        lenC = lenA + 1;
    }
    else {
        lenC = lenB + 1;
    }

    printarray(C, lenC);
    
    free(C);
    return 0;
}