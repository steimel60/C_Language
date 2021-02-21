/*
    This program calculates the volume of a cube with the side length given by the user
*/

#include <stdio.h>


double cube_volume (double side_len);

int main () 
{
    double num, vol;
    printf("Enter a number:\n");
    scanf("%lf", &num);
	vol = cube_volume (num);
    printf("Your cube volume is: %lf\n", vol);
    return 0;
}

double cube_volume (double side_len)
{
	double vol;
	vol = side_len * side_len * side_len;
	return vol;
}