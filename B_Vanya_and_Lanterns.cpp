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
#include <set>

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

int arr[1000];

int main() {
	int n, l;
	scanf("%d %d", &n, &l);
	rep(n) scanf("%d", &arr[i]);
	sort(arr, arr+n);	
	double maxdist=0;
	int currdist;
	rep2(1, n, 1) {
		if((currdist=(arr[i]-arr[i-1]))>maxdist) maxdist = currdist;
	}
	maxdist = max(maxdist/2.0, (double)max(arr[0], l-arr[n-1]));
	printf("%.9lf", maxdist);
	return 0;
}
