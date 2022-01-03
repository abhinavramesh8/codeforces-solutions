#include <cstdio>
bool arr[110] = {false};

int main() {
	int n, p, q, ele;
	bool complete = true;
	scanf("%d", &n);
	scanf("%d", &p);
	for(int i=0; i<p; i++) {
		scanf("%d", &ele);
		arr[ele] = true;
	}
	scanf("%d", &q);
	for(int i=0; i<q; i++) {
		scanf("%d", &ele);
		arr[ele] = true;
	}
	for(int i=1; i<=n; i++) {
		if(!arr[i]) {
			complete = false;
			break;
		} 
	}
	if(complete) printf("I become the guy.");
	else printf("Oh, my keyboard!");
	return 0; 
}
