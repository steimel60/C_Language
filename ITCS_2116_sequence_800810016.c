/*
    This program calculates the highest value, second highest value, and average value from user inputs.
	Program ends when a negative number is entered.
*/

#include <stdio.h>

double maximum(double max, double input);
double average(int list_length, double avg, double input);

int main () 
{
    double num, max, almost_max, avg, sum;
	int list_length;
	
	num = 0;
	max = 0;
	almost_max = 0;
	sum = 0;
	list_length = 0;
    while(num >= 0)
	{
		printf("Enter a number (negative to exit): ");
		scanf("%lf", &num);
		if (num >= 0)
		{
			list_length += 1;
			if (num == max)
			{
				almost_max = num;
			}
			
			if (num > max)
			{
				almost_max = max;
				max = num;
			}
			
			if (num < max && num > almost_max)
			{
				almost_max = num;
			}
			sum += num;
		}

	}
	
	avg = sum / list_length;
		
	switch(list_length)
	{
		case 0:
			printf("Your highest value is: NA\n");
			printf("Your second highest value is: NA\n");
			printf("Your average value is: NA\n");
			printf("Program only works with positive numbers.\n");
			break;
		case 1:
			printf("Your highest value is: %lf\n", max);
			printf("Your second highest value is: NA\n");
			printf("Your average value is: %lf\n", avg);
			break;
		default:
			printf("Your highest value is: %lf\n", max);
			printf("Your second highest value is: %lf\n", almost_max);
			printf("Your average value is: %lf\n", avg);
	}
	return 0;
}
	
	
	



