#include <cstdio>

int main() {
	int n;
	scanf("%d", &n);
	int a[3];
	int ele;
	int count = 0;
	for(int i=0; i<n; i++) {
		a[1] = 0;
		for(int j=0; j<3; j++) {
			scanf("%d", &ele);
			a[ele]++;
		}
		if(a[1]>>1) count++;
	}
	printf("%d", count);

	return 0;
}
