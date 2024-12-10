/*
https://leetcode.com/problems/is-subsequence/description/?envType=study-plan-v2&envId=leetcode-75
*/

#include <bits/stdc++.h>

using namespace std;

bool isSubsequence(string s, string t) {
	int j = 0;
	for (char &c: t) {
		if (s[j] == c) j++;
	}

	return j == s.size();
}

int main() {
	string s = "axc", t = "ahbgdc";

	cout << (isSubsequence(s, t) ? "true" : "false");

}