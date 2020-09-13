#include<stdio.h>
#define MAX_N 100
int main(){
    int n;
    scanf("%d",&n);
    int arr[100][100];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",(*(arr+i)+j));
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            int temp = *(*(arr+i)+j);
            *(*(arr+i)+j) = *(*(arr+j)+i);
            *(*(arr+j)+i) = temp;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",*(*(arr+i)+j));
        }
        printf("\n");
    }
}