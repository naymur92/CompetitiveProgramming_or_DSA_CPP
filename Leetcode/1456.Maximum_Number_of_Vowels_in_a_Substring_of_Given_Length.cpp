/*
https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/description/?envType=study-plan-v2&envId=leetcode-75
*/

#include <bits/stdc++.h>

using namespace std;

bool checkVowels(char c) {
    return (c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'I' ||
            c == 'i' || c == 'O' || c == 'o' || c == 'U' || c == 'u');
}

int maxVowels(string s, int k) {
	int cur_vowels = 0, max_vowels = 0;

	for (int i = 0; i < k; ++i) {
		if (checkVowels(s[i])) cur_vowels++;
	}
	max_vowels = cur_vowels;

	for (int i = k; i < s.size(); ++i) {
		cur_vowels = cur_vowels - checkVowels(s[i - k]) + checkVowels(s[i]);

		max_vowels = max(max_vowels, cur_vowels);
	}

	return max_vowels;
}

int main() {
	string s = "abciiidef";
	int k = 3;

	cout << maxVowels(s, k);
}