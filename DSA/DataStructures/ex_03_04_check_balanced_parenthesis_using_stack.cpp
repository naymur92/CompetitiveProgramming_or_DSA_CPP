#include <bits/stdc++.h>

using namespace std;

bool checkBalanced(string exp) {
	int n = exp.size();

	stack<char> s;

	for (int i = 0; i < n; ++i) {		
		if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')	// checking for opening
			s.push(exp[i]);
		else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']') {		// checking for closing
			if (s.empty())
				return false;
			else {
				if (
					(exp[i] == ')' && s.top() == '(') ||
					(exp[i] == '}' && s.top() == '{') ||
					(exp[i] == ']' && s.top() == '[')
					)		// checking for closing match
					s.pop();
				else
					return false;
			}
		}
	}
	return s.empty();
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;

		cout << (checkBalanced(s) ? "YES\n" : "NO\n");
	}
}

/*
3
[A+B*{C/(D-E)+F}+G]-H
[A+(B*{C/(D)-E)+F}+G]-H
[A+B*{C/(D-E)+(F}+G]-H)
*/

/*
YES
NO
NO
*/