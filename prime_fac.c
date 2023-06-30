#include <stdio.h>
#include <stdlib.h>

void prime_div(unsigned long long start, int divisor, int d[]) {
    static int count = 0;
	if (start <= 1) {
        return;
    }
    
    if (start % divisor == 0) {
        d[count] = divisor;
        count++;
        prime_div(start / divisor, divisor, d);
    } else {
        prime_div(start, divisor + 1, d);
    }
}

int main() {
    unsigned long long n;
    int div[128] = {0};  // init
    printf("Enter a number: ");
    scanf("%llu", &n);
	
    printf("Prime factorization of %lld: ", n);
    prime_div(n, 2, div);
    
    for (int i = 0; div[i] != 0; i++) {
        printf("%d ", div[i]);
    }
    
    printf("\n");

    return 0;
}

