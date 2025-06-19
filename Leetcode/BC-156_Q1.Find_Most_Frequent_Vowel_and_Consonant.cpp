/*
https://leetcode.com/contest/biweekly-contest-156/problems/find-most-frequent-vowel-and-consonant/description/
*/

#include <bits/stdc++.h>

using namespace std;

int maxFreqSum(string s) {
    map<char, int> v;
    map<char, int> c;

    for (int i = 0; i < s.size(); ++i) {
    	if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
    		v[s[i]]++;
    	} else {
    		c[s[i]]++;
    	}
    }

    int max_v = 0, max_c = 0;

    for (auto &it: v) max_v = max(max_v, it.second);
    for (auto &it: c) max_c = max(max_c, it.second);

    return max_v + max_c;
}

int main() {
	cout << maxFreqSum("successes");
}