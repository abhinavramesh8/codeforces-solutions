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
 
int arr[60];
 
int main() {
	int n,k,counter=0;
	scanf("%d %d", &n, &k);
	rep(n) scanf("%d", &arr[i]);
	k--;
	if(arr[k]) {
		rep2(k,n,1) {
			if(arr[i]==arr[k]) counter++;
			else break;
		}
		counter += k;
	}
	else {
		for(int i=k-1; i>=0; i--) {
			if(arr[i]) counter++;
		}
	}
	cout<<counter;
	return 0;
}
