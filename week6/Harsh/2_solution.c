#include <stdio.h>

int main() {
	
	/* Write your code here */
    int c1,m1,c2,m2;
    scanf("%d %d %d %d", &m1, &c1, &m2, &c2);
    double x,y;
    if (find_intersection_point(&x, &y, m1,c1,m2,c2) != -1) {
        printf("%.2lf %.2lf\n", x, y);
    } else {
        printf("-1\n");
    }
	return 0;
}

int find_intersection_point(double* x, double* y, int m1, int c1, int m2, int c2)
{
	/* Complete the function */
    if(m1 == m2) return -1;
    *x = (c2-c1)/(double)(m1-m2);
    *y = m1*(*x) + c1;
	return 0;
}