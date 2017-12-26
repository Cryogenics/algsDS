#include <stdio.h>
#include <stdlib.h>


long long maxPairwiseProduct(long long numbers[], size_t arraySize);

long long maxPairwiseProduct(long long numbers[], size_t arraySize){

	int i, j;
	int largestIndex;
	int secondLargestIndex;
	int largestNum = -1;
	int secondLargestNum = -1;
	long long result = 0;

	for(i = 0; i < arraySize; ++i){
		if(numbers[i] > largestNum){
			largestIndex = i;
			largestNum = numbers[largestIndex];
		}
	}

	for(j = 0; j < arraySize; ++j){
		if(numbers[j] > secondLargestNum && j != largestIndex){
			secondLargestIndex = j;
			secondLargestNum = numbers[secondLargestIndex];
		}	
	}

	result = numbers[largestIndex] * numbers[secondLargestIndex];	

	return result;	
}

int main(void)
{
	int n;
	int i;
/*	
	while(1){
		n = rand() % 1000 + 2;
		fprintf(stderr, "%d\n", n);
		long long arr[n];

		for(i = 0; i < n; ++i){
			arr[i] = rand() % 100000;
		}
		
		for(i = 0; i < n; ++i){
			fprintf(stderr, "%lld\n ", arr[i]);
		}

		printf("\n");
		long long result1 = maxPairwiseProduct( arr, (sizeof(arr)/sizeof(arr[i])) );
	}
*/
	long long numToInput;
	long long result;
	
	scanf("%d", &n);

	if(n < 2 || n > 200000){
		exit(0);
	}

	long long numArray[n];
	int arraySize = ( sizeof(numArray) / sizeof(numArray[i]) );

	for(i = 0; i < n; i++){
		scanf("%lld", &numToInput);
	
		if(numToInput < 0 || numToInput > 100000){
			exit(0);
		}			
			
		numArray[i] = numToInput;
	}

	
	result = maxPairwiseProduct(numArray, arraySize);
	printf("%lld\n", result);

	return 0;
}
