/*https://leetcode.com/problems/generate-parentheses/description/*/

#include <bits/stdc++.h>
using namespace std;

vector<string> valid;

void generate(string &s, int opening, int closing) {
	if (opening == 0 && closing == 0) {
		valid.push_back(s);
		return;
	}

	if (opening > 0) {
		s.push_back('(');
		generate(s, opening - 1, closing);
		s.pop_back();	// backtracking
	}

	if (closing > 0 && opening < closing) {
		s.push_back(')');
		generate(s, opening, closing - 1);
		s.pop_back();	// backtracking
	}
}

int main() {
	int n;
	cin >> n;
	string s;
	generate(s, n, n);

	for (auto &elem: valid) cout << elem << "\n";
}

/*
2

3
*/