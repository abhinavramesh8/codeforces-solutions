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
typedef vector<int> vi;

#define MAX1 110
#define MAX2 100010
#define pb push_back
#define mkp make_pair
#define debug(x) cout<<x<<endl
#define sz(a) (int)a.size()
#define rep(n) for(int i=0; i<n; i++)
#define rep2(a, n, k) for(int i=a; i<n; i+=k)

int a[30010];
int d[30010];

int main() {
	int n,t;
	d[1] = 1;
	scanf("%d %d", &n, &t);
	rep2(1, n, 1) scanf("%d", &a[i]);
	rep2(1, n, 1) if(d[i]) d[i+a[i]] = 1;
	cout<< (d[t] ? "YES" : "NO");
	return 0;
}
