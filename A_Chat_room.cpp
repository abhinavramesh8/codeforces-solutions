#include <cstdio>
char str[110];
char hello[] = "hello";

bool isHello() {
	int j=0;
	char c, k;
	c = hello[0];
	for(int i=0; (k=str[i])!='\0'; i++) {
		if(k==c) {
			c = hello[++j];
			if(c=='\0') return true;
		}
	}
	return false;
}

int main() {
	scanf("%s", str);
	if(isHello()) printf("YES");
	else printf("NO");
	return 0;
}
