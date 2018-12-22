#include <stdio.h>
#include <math.h>

int main() {
	long n;
	scanf("%ld", &n);

	while (n % 2 == 0) {
		n = n/2;
	}

	for (long i = 3; i <= sqrt(n); i= i+2) {
		while(n % i == 0) {
			n = n/i;
		}
	}
	printf("%ld\n", n);
	return 0;
}