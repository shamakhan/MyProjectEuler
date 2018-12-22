#include <stdio.h>
#include <stdbool.h>

bool isEven(int n) {
	return n % 2 == 0;
}

int main() {
	// int sum = 2;
	// int a = 1 , b = 2, temp;
	int n;
	scanf("%d", &n);
	printf("%d", n & 1);
	// while (sum < 4000000) {
	// 	temp = a + b;
	// 	if (isEven(temp)) {
	// 		sum += temp;
	// 	}
	// 	a = b;
	// 	b = temp;
	// }
	// printf("%d\n", sum);
	// return 0;
}