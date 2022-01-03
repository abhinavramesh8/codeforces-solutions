#include <iostream>
#include <string>
using namespace std;

int main() {
	char c;
	string str = "qwertyuiopasdfghjkl;zxcvbnm,./";
	string inp;
	cin>>c;
	cin.ignore(120, '\n');
	getline(cin, inp);
	for(int i=0; i<inp.size(); i++)
		cout<<str[str.find(inp[i]) - (c=='R') + (c=='L')];
	return 0;
}
