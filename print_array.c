#include <stdio.h>



int main()
{
	int i, j, k, list[] = {10, 2, 4, 5, 91, 1, 100, 3};
	int *p = list;
	
	
	for(i=0; i<8; i++){
		for(j=i+1; j<8; j++){
			if (*(p+i) < *(p+j)){
				k = *(p+i);
				*(p+i) = *(p+j);
				*(p+j) = k;
			}
		}
		
	}
	
	for(i=0; i<8; i++){
		printf("%d ", *(p+i));
	}
}