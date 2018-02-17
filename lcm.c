#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

long long euclid(long long a, long long b){

	long long remainder = a % b;
	while(remainder != 0){
		a = b;
		b = remainder;
		remainder = a % b;
	}
	return b;
}

long long lcm(long long a, long long b){

	long long product = a * b;
	//printf("OH HAI FROM FUNCTION PRODUCT = 		%lld\n", a * b);
	long long gcd = euclid(a,b);
	return product/gcd;
	//return (long long)((a * b) / (euclid(a,b)));
}
 
int main(void) {
	long long a, b = 0;
	scanf("%lld %lld", &a, &b);
	assert(a >= 1 && a <= 2000000000 && b >= 1 && b <= 2000000000);
	//printf("product of a*b:		%lld\n", a * b);
	//printf("GCD: 	%lld\n", euclid(a,b));
	printf("%lld\n", lcm(a,b));
	return 0;
}
