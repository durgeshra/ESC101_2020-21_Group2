#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int count = 0;
    while(a!=-1){
        int sum_of_digits = 0;
        if(a<0){
            a = -a;
        }
        while(a>0){
            int digit = a%10;
            sum_of_digits += digit;
            a/=10;
        }
        if(sum_of_digits >=7){
            count ++;
        }
        scanf("%d",&a);
    }

    printf("%d\n",count);

}