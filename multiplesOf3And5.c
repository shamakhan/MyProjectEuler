#include <stdio.h>
#include <stdbool.h>


// Sn = 3(1+2+3+...+n/3) = 3((n/3)(n/3+1))/2
long long int getSum (int x, long int n) {
	return x*(((n/x)*(n/x + 1))/2);
}

long long int getSumOfMultiples(long int below) {
	return (getSum(3, below-1) + getSum(5, below-1)) - getSum(15, below-1);
}

int main(){
    int t; 
    long int n; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; ++a0){
        scanf("%ld",&n);
        printf("%lld\n", getSumOfMultiples(n));
    }
    return 0;
}