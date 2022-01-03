#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
 
using namespace std;
 
int main() {
	int arr[10];
	int n,k;
	scanf("%d", &n);
	int i=n;
	bool ok;
	while(++i) {
		ok = true;
		k = i;
		memset(arr, 0, sizeof(arr));
		while(k) {
			++arr[k%10];
			k /= 10;
		}
		for(int j=0; j<10; j++) {
			if(arr[j]>1) {
				ok = false;
				break;
			}
		}
		if(ok) {
			cout<<i;
			break;
		}
	}
	return 0;
}
