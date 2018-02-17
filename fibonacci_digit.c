#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

int fibonacci_digit_naive(int n) {
    if (n <= 1)
        return n;

    return (fibonacci_digit_naive(n - 1) + fibonacci_digit_naive(n - 2)) % 10; 
}

int fibonacci_digit_fast(int n) {
	int fibDigitArray[n];
	int i;

	fibDigitArray[0] = 0;
	fibDigitArray[1] = 1;
	//printf("%d\n", fibArray[0]);
	//printf("%d\n", fibArray[1]);
	
	for(i = 2; i <= n; ++i){
		fibDigitArray[i] = (fibDigitArray[i-1] + fibDigitArray[i-2]) % 10;
		//printf("%d\n", fibArray[i]);
	}
	
	return fibDigitArray[n];
}

void test_solution() {
    assert(fibonacci_digit_fast(3) == 2);
    assert(fibonacci_digit_fast(331) == 9);
    //for (int n = 0; n < 20; ++n)
        //assert(fibonacci_digit_fast(n) == fibonacci_digit_naive(n));
}

int main() {
    int n = 0;
    scanf("%d", &n);

    assert(n >= 1 && n <= 10000);
    test_solution();
    //printf("%d\n", fibonacci_naive(n));
    printf("%d\n", fibonacci_digit_fast(n));
    return 0;
}
