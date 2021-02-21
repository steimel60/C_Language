#include <stdio.h> 

int prod(int, int); 


int main() 
{ 
    int product = prod(3, 4); 
    printf("Product=%d\n", product); 
} 

int prod(int x, int y) 
{ 
    int prod;
	prod = x * y;
	return prod;
}