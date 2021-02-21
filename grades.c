/*
    This program prompts the user to enter a number, then gives a corresponding letter grade.
*/

#include <stdio.h>


int main () 
{
    int grade, min_a, min_b, min_c, min_d;
	
	min_a = 90;
	min_b = 80;
	min_c = 70;
	min_d = 60;
   
	printf("Please enter your grade:");
	scanf("%i", &grade);
	
	while (grade < 0 || grade > 100) { 
	printf("Grade must be between 0 and 100.\nPlease try again: ");
	scanf("%i", &grade);
	}
	
	
	if (grade >= min_a){
		printf("You got an A.\n");
	}
	else if (grade >= min_b){
		printf("You got a B.\n");
	}
	else if (grade >= min_c){
		printf("You got a C.\n");
	}
	else if (grade >= min_d){
		printf("You got a D.\n");
	}
	else {
		printf("You got an F.\n");
	}
	
    
    return 0;
}