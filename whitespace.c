/*
Check to see if input is whitespace or not
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
	unsigned char check;
	
	printf("Please enter a character: ");
	scanf("%c", &check);
	
	if (isspace(check))
		printf("Character is white space.\n");
	else printf("Character is not white space.\n");
	
}