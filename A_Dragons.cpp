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
	int n,s;
	scanf("%d %d", &s, &n);
	vector< ii > v;
	int x,y;
	rep(n) {
		scanf("%d %d", &x, &y);
		v.pb(ii(x, y));
	}
	sort(v.begin(), v.end());
	bool defeat = false;
	rep(n) {
		if(v[i].first>=s) {
			defeat=true;
			break;
		}
		s += v[i].second;
	}
	cout<<(defeat ? "NO" : "YES" );
	return 0;
}
