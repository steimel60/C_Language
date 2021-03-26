#include <stdio.h>

int contains_negative(int arr[], int size, int *neg_element);

int main()
{
	int n, arr[] = {2, 3, 17, -1, 4};
	n=5;
	contains_negative(arr, n, &(arr[0]));
	printf("%p", &arr);
	
	return 0;
}

int contains_negative(int arr[], int size, int *neg_element)
{
	int i;
	
	i = 0;
	while(i<size){
		if (*(neg_element + i) < 0){
			neg_element = neg_element + i;
			return 1;
			break;
		}
		if ( i == size - 1 ){
			neg_element = NULL;
		}
		i++;
	}

	return 0;
}