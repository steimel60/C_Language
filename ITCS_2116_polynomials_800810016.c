/*
Calculate the value of a polynomial input by the user
*/

#include <stdio.h>

float evaluate(float coeffs[], int size, float x);

int main()
{
	int n, i;
	float x, ans;
	
	printf("Enter n: ");
	scanf("%i", &n);
	
	float cof[n];
	printf("Enter coefficients: ");
	for(i=0; i<n; i++)
	{
		scanf("%f", &cof[i]);
	}
	printf("Enter x: ");
	scanf("%f", &x);
	
	ans = evaluate(cof, n, x);
	printf("Answer is %.2f\n", ans);
}

float evaluate(float coeffs[], int size, float x)
{
	int i, j;
	float total = 0;
	float x_pow;
	
	total = coeffs[0];
	for(i=1; i <= size; i++)
	{
		x_pow = 1;
		for(j=i; j>0; j--)
		{
			x_pow = x_pow * x;
		}
		total += coeffs[i] * x_pow;
	}
	return total;
}