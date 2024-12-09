/*
https://leetcode.com/problems/increasing-triplet-subsequence/?envType=study-plan-v2&envId=leetcode-75
*/

#include <bits/stdc++.h>

using namespace std;

int compress(vector<char>& chars) {
	vector<char> result;

	// result.push_back(chars[0]);
	int n = chars.size();
	int i = 1;
	for (int i = 0; i < n; ++i)
	{
		result.push_back(chars[i]);
		int j = i + 1;
		while (j < n and chars[i] == chars[j]) j++;
		int cn = j - i;
		if (cn > 1) {
			string cns = to_string(cn);
			for (auto &c: cns) {
				result.push_back(c);
			}
		}
		i += cn - 1;
	}

	chars = result;

	return result.size();
}

int main() {
	vector<char> chars = {'a','a','b','b','c','c','c'};

	cout << compress(chars) << "\n";

	for (int i = 0; i < chars.size(); ++i)
	{
		cout << chars[i] << ",";
	}
}