/*
    This program prompts the user to enter a number, and then prints that many stars, then that many - 1 on the following row, until reaching 0.
*/

#include <stdio.h>


int main () 
{
    int num, i;
    printf("Enter a number of rows: ");
    scanf("%d", &num);
    
	i = 0;
	for(num; num>=1; num--)
	{
		for (i=0; i<num; i++)
		{
			printf("*");
		}
		printf("\n");
	}
    return 0;
}