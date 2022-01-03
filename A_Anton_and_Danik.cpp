#include <cstdio>
char str[100010];
long arr[70];

int main() {
	long n;
	scanf("%ld", &n);
	scanf("%s", str);
	arr[65] = 0;
	arr[68] = 0;
	for(long i=0; i<n; i++) ++arr[str[i]];
	long anton = arr[65];
	long danik = arr[68];
	if(anton<danik) printf("Danik");
	else if(danik<anton) printf("Anton");
	else printf("Friendship");
	return 0;
}
