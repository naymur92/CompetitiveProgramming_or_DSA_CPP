#include <bits/stdc++.h>

using namespace std;

// reverse string using stack
void reverse(string &c, int n) {
	stack<char> S;

	for (int i = 0; i < n; ++i)
		S.push(c[i]);

	for (int i = 0; i < n; ++i) {
		c[i] = S.top();
		S.pop();
	}
}


int main() {
	string s = "Hello World!";
	cout << s << "\n";

	reverse(s, s.size());

	cout << s << "\n";
}