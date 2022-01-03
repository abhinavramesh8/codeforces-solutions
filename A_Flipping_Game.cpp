#include <cstdio>
#define FOR(i, n) for(int i=1; i<=n; i++)
int dp[110][110];
int arr[110];

int main() {
    int n, ele;
    scanf("%d", &n);
    FOR(i, n) {
        scanf("%d", &ele);
        dp[i][i] = ele^1;
        arr[i] = arr[i-1] + ele;
    }
    FOR(i, n) {
        for(int j=i+1; j<=n; j++) {
            dp[i][j] = dp[i][j-1] + dp[j][j]; 
        }
    }
    int last = arr[n];
    int max = dp[1][1] + last-arr[1];
    int intermediate;
    FOR(i, n) {
        for(int j=i; j<=n; j++) {
        	intermediate = dp[i][j] + arr[i-1] + last - arr[j];
            if(max<intermediate) max = intermediate; 
        }
    }
    printf("%d", max);
}
