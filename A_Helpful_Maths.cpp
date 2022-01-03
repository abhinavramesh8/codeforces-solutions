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
int arr[4];
 
int main() {
	scanf("%s", str);
	int n = strlen(str);
	for(int i=0; i<n; i+=2) arr[str[i]-'0']++;
	if(arr[1]) {
		while(--arr[1]) printf("1+");  
		if(arr[2]||arr[3]) printf("1+"); 
		else { 
			printf("1");
			return 0;
		}
	}
	if(arr[2]) {
		while(--arr[2]) printf("2+");  
		if(arr[3]) printf("2+");
		else { 
			printf("2");
			return 0;
		}
	}
	if(arr[3]) {
		while(--arr[3]) printf("3+");
		printf("3");
	}
	return 0;
}
