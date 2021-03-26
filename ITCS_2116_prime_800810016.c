#include <stdio.h>

int check_prime(int *arr, int *size, int num);

int main()
{
	int primes[100] = {};
	int primes_in_arr = 0;
	int i, n;
	
	printf("Enter N: ");
	scanf("%i", &n);
	check_prime(primes, &primes_in_arr, n);
	printf("Prime numbers: ");
	for (i=0; i<primes_in_arr; i++){
		printf("%i ", primes[i]);
	}
	
	return 0;
	
}


int check_prime(int *arr, int *size, int num){
	int i, j, flag;
	for (i = 2; i <= num; i++){
		flag = 0;
		for(j=2; j<i; j++){
			if (i % j == 0)
				flag = 1;
		}
		if(flag == 0){
			arr[*size] = i;
			*size += 1;
		}
	}
	
	return flag;
}