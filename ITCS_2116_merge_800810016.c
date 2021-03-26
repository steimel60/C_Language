#include <stdio.h>

int main()
{
	int i, j, k, n, m;
	int arr1[100], arr2[100];
	
	
	printf("Enter array 1 (negative to end): ");
	
	i = 0;
	n = 0;
	while (i >=0)
	{
		scanf("%i", &i);
		arr1[n] = i;
		n++;
	}
	
	for(i=0; i<n-1; i++){
		printf("%d ", arr1[i]);
	}
	printf("\n");
	
	
	
	printf("Enter array 2: ");
	
	i = 0;
	j = 0;
	while (i >= 0)
	{
		scanf("%i", &i);
		arr2[j] = i;
		j++;
	}
	
	for(i=0; i < j-1; i++){
		if (arr2[i])
		printf("%d ", arr2[i]);
	}
	printf("\n");
	
	
	k = n + j;
	
	int arr3[k];
	for (i = 0; i < n ; i++)
	{
		arr3[i] = arr1[i];
	}
	for(i = n; i < k; i++)
	{
		arr3[i] = arr2[i - n];
	}
	for(i=0; i < k; i++){
		if (arr3[i] >= 0)
			printf("%d ", arr3[i]);
	}
	printf("\n");
	
	int *p = arr3;
	
	
	for(i=0; i<k; i++){
		for(j=i+1; j<k; j++){
			if (*(p+i) < *(p+j)){
				m = *(p+i);
				*(p+i) = *(p+j);
				*(p+j) = m;
			}
		}
		
	}
	
	printf("Descending array: ");
	for(i=0; i < k; i++){
		if(*(p+i) >= 0)
			printf("%d ", *(p+i));
	}
	printf("\n");
	
	printf("Ascending array: ");
	for(i = k - 1; i>= 0; i--){
		if(*(p+i) >=0)
			printf("%d ", *(p+i));
	}
	printf("\n");
}
