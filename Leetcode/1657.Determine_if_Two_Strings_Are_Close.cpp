/*
https://leetcode.com/problems/determine-if-two-strings-are-close/description/?envType=study-plan-v2&envId=leetcode-75
*/

#include <bits/stdc++.h>

using namespace std;

bool closeStrings(string word1, string word2) {
	vector<int> chars1(27, 0), chars2(27, 0);

	int n1 = word1.size(), n2 = word2.size();

	if (n1 != n2) return false;

	for (int i = 0; i < n1; ++i) {
		chars1[word1[i] - 'a']++;
		chars2[word2[i] - 'a']++;
	}

	for (int i = 0; i <= 26; ++i) {
		if (chars1[i] > 0 and chars2[i] == 0) return false;
	}

	sort(chars1.begin(), chars1.end());
	sort(chars2.begin(), chars2.end());

	for (int i = 0; i <= 26; ++i) {
		if (chars1[i] != chars2[i]) return false;
	}

	return true;
}

int main() {
	string word1 = "uau", word2 = "ssx";

	cout << boolalpha << closeStrings(word1, word2);
}