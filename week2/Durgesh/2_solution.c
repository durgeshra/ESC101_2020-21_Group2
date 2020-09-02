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
            c = c+n;
            s = s+1;
        }
        c = c-n;                        // We have exceeded `b` in the while loop, undo the last jump
        s = s-1;
    }
    else{                               // If initial position is ahead of destination, we jump behind
        while(c>b){
            c = c-n;
            s = s+1;
        }
    }

    printf("%d %d\n", c, s);            // Print the answer

    return 0;
}