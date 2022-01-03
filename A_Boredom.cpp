#include <cstdio>
#include <iostream>
#define MAX 100010
typedef long long ll;

using namespace std;

ll dp[MAX];
int counter[MAX];

int main() {
	int n, ele, maxele=0;
	scanf("%d", &n);
	for(int i=0; i<n; i++) {
		scanf("%d", &ele);
		counter[ele] ++;
		if(maxele<ele) maxele = ele;
	}
	dp[0] = 0;
	dp[1] = counter[1];
	for(int i=2; i<=maxele; i++) {
		dp[i] = max(dp[i-1], dp[i-2] + counter[i]*(ll)i);
	} 
	cout<<dp[maxele];
	return 0;
}
