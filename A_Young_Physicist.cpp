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
 
 
int main() {
	int n, xc=0,yc=0,zc=0,x,y,z;
	scanf("%d", &n);
	rep(n) {
		scanf("%d %d %d", &x, &y, &z);
		xc+=x; yc+=y; zc+=z;
	}
	if(xc || yc || zc) printf("NO"); 
	else printf("YES");
	return 0;
}
