/*
https://leetcode.com/problems/removing-stars-from-a-string/description/?envType=study-plan-v2&envId=leetcode-75
*/

#include <bits/stdc++.h>

using namespace std;

// using stack
/*string removeStars(string s) {
	string output = "";

	stack<char> st;
	for (int i = 0; i < s.size(); ++i) {
		st.push(s[i]);
	}

	int rm = 0;
	while (!st.empty()) {
		if (st.top() == '*') rm++;
		else {
			if (rm > 0) rm--;
			else output += st.top();
		}

		st.pop();
	}

	reverse(output.begin(), output.end());

	return output;
}
*/

// using loop
string removeStars(string s) {
	string output = "";

	int rm = 0;
	for (int i = s.size() - 1; i >= 0; --i) {
		if (s[i] == '*') rm++;
		else {
			if (rm > 0) rm--;
			else output.push_back(s[i]);
		}
	}

	reverse(output.begin(), output.end());

	return output;
}

int main() {
	string s = "leet**cod*e";

	cout << removeStars(s);
}