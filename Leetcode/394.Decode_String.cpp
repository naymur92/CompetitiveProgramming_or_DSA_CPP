/*
https://leetcode.com/problems/decode-string/description/?envType=study-plan-v2&envId=leetcode-75
*/

#include <bits/stdc++.h>

using namespace std;

string decodeString(string s) {
	stack<int> nums;
	stack<string> parts;

	int n = s.size();
	string part = "";
	for (int i = 0; i < n; ++i) {
		int num = 0;
		if (s[i] > '0' and s[i] <= '9') {
			if (part != "") {
				parts.push(part);
				part = "";
			}
			while (i < n and s[i] != '[') {
				int curr = s[i] - '0';
				num = num * 10 + curr;
				i++;
			}
			nums.push(num);
			// cout << num << "\n";
		} else if (s[i] == ']') {
			string cur_part = "";
			if (part == "") {
				part = parts.top();
				parts.pop();
			}
			for (int j = 0; j < nums.top(); ++j) {
				cur_part += part;
			}
			nums.pop();
			part = "";

			// cout << cur_part << "\n";
			// cout << cur_part << "\n";

			if (!parts.empty()) {
				cur_part = parts.top() + cur_part;
				parts.pop();
				parts.push(cur_part);
			} else {
				parts.push(cur_part);
			}
		} else {
			part.push_back(s[i]);
		}
	}

	string ans = "";
	if (!parts.empty()) {
		ans = parts.top();
	}
	if (part != "") ans += part;

	return ans;
}

int main() {
	string s = "3[z]2[2[y]pq4[2[jk]e1[f]]]ef";

	cout << decodeString(s);
}