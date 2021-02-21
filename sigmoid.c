/*
    This program calculates the sigmoid value of a value given by the user
*/

#include <stdio.h>
#include <math.h>


double sigmoid (double x);

int main () 
{
    double num, sig;
    printf("Enter a number: ");
    scanf("%lf", &num);
	sig = sigmoid (num);
    printf("Your sigmoid value is: %lf\n", sig);
    return 0;
}

double sigmoid (double x)
{
	double sig;
	sig = 1 / (1 + exp (-x));
	return sig;
}