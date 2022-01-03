#include <cstdio>

char str[110];
int present[150];

int main() {
	int i=0;
	scanf("%s", str);
	char c;
	for(; (c=str[i])!='\0'; i++) {
		present[c] = 1;
	}
	i='a';
	int distinct = 0;
	while(i<='z') {
		if(present[i]) distinct++;
		i++; 
	}
	if(distinct&1) printf("IGNORE HIM!");
	else printf("CHAT WITH HER!");
	return 0;
}
