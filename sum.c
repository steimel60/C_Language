/*
This program gives you the sum of input numbers. Enter "-1" to exit.
*/

#include <stdio.h>


int main () 
{
    int sum, next_num;
	
	sum = 0;
	next_num = 0;
	
	while (next_num != -1) { 
	printf("Your sum is %i.\nEnter a number: ", sum);
	scanf("%i", &next_num);
	
	sum += next_num;
	}
	
	printf("Done, thank you!\n");
	return 0;
}
	