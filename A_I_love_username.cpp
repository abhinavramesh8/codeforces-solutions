#include <cstdio>

int main() {
	int n,k,count=0;
	scanf("%d", &n);
	scanf("%d", &k);
	int min=k, max=k;
	for(int i=1; i<n; i++) {
		scanf("%d", &k);
		if(k<min) { 
			count++;
			min = k;
		}
		else if(k>max) {
			count++;
			max = k;
		}
	}
	printf("%d", count);
	return 0;
}
