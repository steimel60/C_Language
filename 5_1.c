/*
    This program prompts the user to enter a number, and then prints the entered number.
*/

#include <stdio.h>


int main () 
{
    int num, i, j;
    printf("Enter a number of rows: ");
    scanf("%d", &num);
    
	i = 1;
	j = 2;
	for (i=1; i<=num; i++)
	{
		if (i % j == 0)
		{
			printf("*      *\n");
		}
		else
			printf("********\n");
	}
    return 0;
}