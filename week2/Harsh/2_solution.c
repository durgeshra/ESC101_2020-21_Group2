#include<stdio.h>

int main()
{
    int N,M;
    scanf("%d %d", &N,&M);
    int max_value = -1;
    while(N--)
    {
        int price;
        scanf("%d",&price);
        if(price>max_value && price<=M)
        {
            max_value = price;
        }
    }
    printf("%d\n", max_value);
    return 0;
}