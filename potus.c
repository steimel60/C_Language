#include <ctype.h>
#include <string.h>
#include <stdio.h>

void print_abbreviation(char* name);

int main()
{
   char name[] = "president of the united states";
   print_abbreviation(name);
   return 0;
}


void print_abbreviation(char* name)
{
	int i, n, flag;
	char str[99];
	
	flag = 0;
	n = 0;
	for (i=0; *(name + i) != '\0'; i++)
	{
		if((isalpha(*(name + i))) && (flag == 0))
		{
			flag = 1;
			str[n] = toupper(*(name + i));
			n++;
		}
		else if (isspace(*(name + i)))
			flag = 0;
	}
	printf("%s\n", str);
}