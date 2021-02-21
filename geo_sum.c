/*
    This program calculates the geometric sum of a value given by the user
*/

#include <stdio.h>
#include <math.h>


double geo_sum (double a, double r, int n);

int main () 
{
    int n;
	double a, r;
    printf("Enter a r n:\n");
    scanf("%lg %lg %d", &a, &r, &n);
    printf("sum = %lg \n", geo_sum(a, r, n));
    return 0;
}

double geo_sum (double a, double r, int n)
{
	double sum;
	sum = 0;
	
	while (n >= 0) {
		sum += a * pow( r , n );
		n -= 1;
	}
	
	return sum;
}