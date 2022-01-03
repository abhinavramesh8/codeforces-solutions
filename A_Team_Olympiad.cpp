#include <cstdio>
int nos[4];
int children[4][5010];

int main() {
	int n, ele, x;
	scanf("%d", &n);
	for(int i=1; i<=n; i++) {
		scanf("%d", &ele);
		children[ele][nos[ele]] = i;
		nos[ele]++;
	}
	int index = 1;
	int min = nos[1];
	for(int i=2; i<=3; i++) {
		if(min>nos[i]) {
			min = nos[i];
			index = i;
		}
	}
	printf("%d\n", min);
	for(int i=0; i<min; i++) {
		printf("%d %d %d\n", children[1][i], children[2][i], children[3][i]);
	}
	return 0;
}
