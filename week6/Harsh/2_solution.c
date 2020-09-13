#include <stdio.h>

void find_intersection_point(double* x, double* y, int* intersection_status, int m1,int c1,int m2,int c2); //Do not modify the function defination

int main() {
	
	/* Write your code here */
    int c1,m1,c2,m2;
    scanf("%d %d %d %d", &m1, &c1, &m2, &c2);
    double x,y; int intersection;
    find_intersection_point(&x, &y, &intersection, m1,c1,m2,c2);
    if(intersection)
        printf("%.2lf %.2lf\n", x, y);
    else
        printf("-1\n");
	return 0;
}

void find_intersection_point(double* x, double* y, int* intersection_status, int m1,int c1,int m2,int c2)
{
	/* Complete the function */
    if(m1 == m2)
        *intersection_status = 0;
    else{
        *x = (c2-c1)/(double)(m1-m2);
        *y = m1*(*x) + c1;
        *intersection_status =1;
    }
	return;
}