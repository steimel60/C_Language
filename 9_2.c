/*
Change non-alpha items in an array to *
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
	char array1[] = "ab cde\n123-fgh";
	char array2[20];
	int i;
	
	for(i=0; array1[i] != '\0'; i++)
	{
		if(isalpha(array1[i]))
		{
			array2[i] = array1[i];
		}
		else array2[i] = '*';
	}
	
	printf("%s\n", array2);
	
	return 0;
}