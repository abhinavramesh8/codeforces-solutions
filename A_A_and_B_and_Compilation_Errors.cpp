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
	int n, ele;
	long sum1=0, sum2=0, sum3=0;
	scanf("%d", &n);
	rep(n) {  
		scanf("%d", &ele);
		sum1 += ele;
	}
	rep(n-1) {  
		scanf("%d", &ele);
		sum2 += ele;
	}
	rep(n-2) {  
		scanf("%d", &ele);
		sum3 += ele;
	}
	long num1 = sum1 - sum2;
	long num2 = sum1 - num1 - sum3;
	cout<<num1<<endl;
	cout<<num2;
	return 0;
}
