#include <stdio.h>
#include <stdbool.h>

int getMax(int n) {
	int max = 0, x = 9;
	while (n > 0) {
		max += x;
		x *= 10;
		--n;
	}
	return max;
}

int getMin(int n) {
	int min = 1;
	while (n > 1) {
		min *= 10;
		--n;
	}
	return min;
}

bool isPalindrome(int val) {
	int rVal, temp = val/10, n;
	rVal = val % 10;
	while (temp > 0) {
		n = temp % 10;
		rVal = (rVal*10) + n;
		temp /= 10;
	}
	return  rVal == val;
}

int getLargestPalindrome(int max, int min) {
	int LP, curr;
	printf("max: %d\tmin: %d\n", max, min);
	for (int i = min;i <= max; ++i) {
		for (int j = min; j <= max; ++j) {
			curr = i * j;
			if (curr > LP) {
				if (isPalindrome(curr)) {
					LP = curr;
				}
			}
		}
	}
	return LP;
}

int main() {
	int n, max, min;
	scanf("%d", &n);
	max = getMax(n);
	min = getMin(n);
	printf("%d\n", getLargestPalindrome(max, min));
	return 0;
}