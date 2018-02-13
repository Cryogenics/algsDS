#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
 
int gcd_naive(int a, int b) {
  int current_gcd = 1;
  for (int d = 2; d <= a && d <= b; d++) {
    if (a % d == 0 && b % d == 0) {
      if (d > current_gcd) {
        current_gcd = d;
      }
    }
  }
  return current_gcd;
}
 
int euclid(int a, int b){
	int remainder = a % b;
	while(remainder != 0){
		a = b;
		b = remainder;
		remainder = a % b;
	}
	return b;
}
 
int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	assert(a >= 1 && a <= 2000000000 && b >= 1 && b <= 2000000000);
	printf("%d\n", euclid(a,b));
	//printf("%d\n", gcd_naive(a,b));
	return 0;
}
