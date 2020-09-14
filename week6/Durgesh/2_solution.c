#include<stdio.h>

void reverseSwap(int* A, int* B, int n){
    for(int i=0; i<n; i++){
        int temp = A[i];
        A[i] = B[n-i-1];
        B[n-i-1] = temp;
    }
    return;
}

int main(){

    int n;
    scanf("%d", &n);

    int A[n];
    int B[n];
    
    for (int i=0; i<n; i++) scanf("%d", &A[i]);   
    for (int i=0; i<n; i++) scanf("%d", &B[i]);

    reverseSwap(A, B, n);   

    for(int i=0; i<n; i++) printf("%d ", A[i]);
    printf("\n");
    for(int i=0; i<n; i++) printf("%d ", B[i]);
    printf("\n");
    return 0;
}