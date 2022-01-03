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
 
char str[MAX1];
 
int main() {
	scanf("%s", str);
	int curlen=1, prev;
	prev = str[0];
	char c;
	for(int i=1; (c=str[i])!='\0'; i++) {
		if(prev==c) {
			++curlen;
			if(curlen==7) {
				cout<<"YES";
				return 0;
			}
		}
		else {
			prev = c;
			curlen = 1;
		} 
	}
	cout<<"NO";
	return 0;
}
