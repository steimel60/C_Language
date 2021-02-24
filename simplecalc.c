/*
    simple calculator
*/

#include <stdio.h>


int main () 
{
    int num1, num2, ans, i;
	char op;
    printf("Enter an operand (+ - * or /): ");
    scanf("%c", &op);
	printf("\nEnter 2 numbers: ");
	scanf("%d %d", &num1, &num2);
	
    if (op == '+')
	{
		i = 1;
	}
	if (op == '-')
	{
		i = 2;
	}
	if (op == '*')
	{
		i = 3;
	}
	if (op == '/')
	{
		i = 4;
	}
	
	switch(i)
	{
		case 1: ans = num1 + num2;
			break;
		case 2: ans = num1 - num2;
			break;
		case 3: ans = num1 * num2;
			break;
		case 4: ans = num1 / num2;
	}
	
	printf("%d %c %d = %d\n", num1, op, num2, ans);
    return 0;
}