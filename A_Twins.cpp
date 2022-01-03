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

int arr[MAX1];

int main() {
	int n;
	scanf("%d", &n);
	rep(n) scanf("%d", &arr[i]);
	sort(arr, arr+n);
	for(int i=n-2; i>=0; i--) {
		arr[i] += arr[i+1];
	}
	int half = arr[0]/2;
	int i;
	for(i=n-1; i>=0; i--) {
		if(arr[i]>half) break; 
	}
	cout<<(n-i);
	return 0;
}
