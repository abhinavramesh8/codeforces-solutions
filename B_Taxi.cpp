#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <cctype>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
 
using namespace std;
 
typedef long long ll;
typedef pair<int, int> ii;
typedef vector< vector< ii > > vii;
 
#define MAX1 110
#define MAX2 100010
#define pb push_back
#define mkp make_pair
#define debug(x) cout<<x<<endl
#define sz(a) (int)a.size()
#define rep(n) for(int i=0; i<n; i++)
#define rep2(a, n, k) for(int i=a; i<n; i+=k)
 
int arr[5];
 
 
int main() {
	int n, ele;
	scanf("%d", &n);
	rep(n) {
		scanf("%d", &ele);
		++arr[ele];
	}
	int taxi=0;
	taxi+=arr[4];
	int thandon = min(arr[1], arr[3]);
	taxi+=thandon;
	arr[1] -= thandon; 
	taxi += (arr[3]-thandon);
	taxi += arr[2]/2;
	arr[2] &= 1;
	if(arr[2]) {
		++taxi;
		if(arr[1]==1) arr[1] = 0;
		if(arr[1]>=2) arr[1] -= 2;
	}
	taxi += arr[1]/4;
	arr[1] %= 4; 
	if(arr[1]) ++taxi;
	printf("%d", taxi);
	return 0;
}
