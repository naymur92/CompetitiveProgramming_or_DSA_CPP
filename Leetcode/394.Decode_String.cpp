/*
https://leetcode.com/problems/decode-string/description/?envType=study-plan-v2&envId=leetcode-75
*/

#include <bits/stdc++.h>

using namespace std;

string decodeString(string s) {
	stack<int> nums;
	stack<string> parts;

	int n = s.size();
	string ans = "";
	string part = "";
	for (int i = 0; i < n; ++i) {
		int num = 0;

		// for number
		if (s[i] > '0' and s[i] <= '9') {
			// if exists any unprocessed string part push it to stack
			if (part != "") {
				parts.push(part);
				part = "";
			}

			// ready int multiplier
			while (i < n and s[i] != '[') {
				int curr = s[i] - '0';
				num = num * 10 + curr;
				i++;
			}
			nums.push(num);

			// push part separator
			parts.push("[");
		} else if (s[i] == ']') {	// for closing
			string temp_part = "";
			while (!parts.empty() and parts.top() != "[") {
				part = parts.top() + part;
				parts.pop();
			}

			for (int j = 0; j < nums.top(); ++j) {
				temp_part += part;
			}
			nums.pop();
			part = temp_part;

			if (!parts.empty() and parts.top() == "[") {
				parts.pop();
			}

			while (!parts.empty() and parts.top() != "[") {
				part = parts.top() + part;
				parts.pop();
			}
			parts.push(part);
			
			part = "";
		} else {	// for chars
			part.push_back(s[i]);
		}
	}

	if (!parts.empty()) {
		ans += parts.top();
	}
	if (part != "") ans += part;

	return ans;
}

int main() {
	string s = "3[z]2[2[y]pq4[2[jk]e1[f]]]ef";

	cout << decodeString(s);
}