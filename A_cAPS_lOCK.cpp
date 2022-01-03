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
	int l = strlen(str);
	int diff = 'a' - 'A';
	if(l==1) {
		if(islower(str[0])) cout<<(char) (str[0]-diff);
		else cout<<(char) (str[0]+diff);
		return 0;
	}
	for(int i=1; i<l; i++) {
		if(islower(str[i])) {
			cout<<str;
			return 0;
		}
	}
	str[0] = (islower(str[0]) ? str[0]-diff : str[0]+diff);
	rep2(1, l, 1) str[i] = (str[i]+diff);
	cout<<str;
	return 0;
}
