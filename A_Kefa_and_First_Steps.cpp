#include <cstdio>

int a[100010];

int main() {
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++) scanf("%d", &a[i]);
	int max = 1, count = 1;
	for(int i=1; i<n; i++) {
		if(a[i]>=a[i-1]) 
			count++;
		else {
			if(max < count) max = count;
			count = 1;
		}
	}
	if(max < count) max = count;
	printf("%d", max);
	return 0;
}
