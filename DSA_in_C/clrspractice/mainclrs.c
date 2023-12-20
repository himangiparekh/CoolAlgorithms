#include <stdio.h>
#include "clrs.h"
#include "searchingsorting.h"

int main(){
    int A[9] = {1,0,1,1,0,1,1,0,1};
    int B[9] = {1,1,1,1,1,0,1,0,1};

    int lenA = sizeof(A)/sizeof(A[0]);
    int lenB = sizeof(B)/sizeof(B[0]);

    int lenC = max(lenA, lenB) + 1;

    int * C = binary_sum(A, B, lenA, lenB);
    printarray(C, lenC);

    return 0;
}

