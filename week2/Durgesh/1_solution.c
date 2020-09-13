#include<stdio.h>

int main(){

    int a, b;
    int n;                              // Inputs

    scanf("%d %d %d", &a, &b, &n);

    int c, s;                           // Outputs

    c = a;                  
    s = 0;                              // Initialization

    if(a<b){                            // If initial position is behind destination, we jump ahead
        while(c<=b){
            printf("%d ", c);           // Print position
            c = c+n;
            s = s+1;
        }
        c = c-n;                        // We have exceeded `b` in the while loop, undo the last jump
        s = s-1;
    }
    else{                               // If initial position is ahead of destination, we jump behind
        while(c>b){
            printf("%d ", c);           // Print position
            c = c-n;
            s = s+1;
        }
        printf("%d ", c);               // Printing final position is necessary, because the while loop will exit before printing it.
    }

    printf("\n%d\n", s);                // Print the answer in a new line

    return 0;
}