#include <cstdio>
#include <stack>
#include <iostream>
using namespace std;
char str[200010];

int main() {
	stack<char> st;
	int n;
	scanf("%d", &n);
	scanf("%s", str);
	char c;
	for(int i=0; i<n; i++) {
		c = str[i];
		if(st.empty()) st.push(str[i]);
		else {
			(st.top()!=c) ? st.pop() : st.push(c);
		}
	}
	cout<<st.size();
}
