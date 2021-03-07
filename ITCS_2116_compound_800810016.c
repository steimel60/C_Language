/*
    This program calculates compound interest for the user
*/

#include <stdio.h>
#include <math.h>

double compound_interest(double p, double i, double n);

int main ()
{
	
	double total, p, i, n;
	printf("Dollar amount to invest:");
		scanf("%lf", &p);

		while (p < 0) { 
		printf("Try again; enter amount > 0: ");
		scanf("%lf", &p);
		}
	
	printf("Percentage interest rate:");
		scanf("%lf", &i);

		while (i <= 0 || i > 15) { 
		printf("Rate must be > 0 and <= 15%%: ");
		scanf("%lf", &i);
		}
	
	printf("Years of invest:");
		scanf("%lf", &n);

		while (n < 0) { 
		printf("Years must be > 0: ");
		scanf("%lf", &n);
		}
	
	total = compound_interest(p, i, n);
	
	printf("If you invest $%.0f at %.0f%%\n", p, i);
	printf("It's value in %.0f years will be $%.2f\n", n, total);
	
	return 0;
}

double compound_interest(double p, double i, double n)
{
	double total;
	total = p * pow(1 + i*.01, n);
	return total;
}