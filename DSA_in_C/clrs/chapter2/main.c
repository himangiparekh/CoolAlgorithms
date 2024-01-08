#include <stdio.h>
#include <stdlib.h>
#include "binaryaddition.h"
#include "/Users/himangiparekh/CoolAlgorithms/DSA_in_C/searchingsorting.h"

int main(){

    int arr[9] = {378, 914, 10101929, 21, 23432, 123, 2134, -5, 892}; // defining initial array

    int a[12] = {1,0,1,1,0,1,0,1,1,1,1,1};
    int b[12] = {1,1,0,1,0,1,0,1,1,1,1,1};

    int lenA = sizeof(a) / sizeof(a[0]);
    int lenB= sizeof(b) / sizeof(b[0]);

    int * C = add_binary_integers(a, b, lenA, lenB, 12);
    int lenC = lenA+1;

    printarray(C, lenC);
    
    return 0;
}