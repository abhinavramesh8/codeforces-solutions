#include <cstdio>

int main() {
	long n;
	long count=0;
	scanf("%ld", &n);
	long one = 1;
	while(n!=0) {
		if(n&one) count++;
		n >>= 1;
	}
	printf("%ld", count);
	return 0;
}
