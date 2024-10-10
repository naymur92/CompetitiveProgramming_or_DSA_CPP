/*
https://codeforces.com/problemset/problem/219/A
*/

#include <bits/stdc++.h>

using namespace std;

int main() {	
	int k;
	string s, part = "", k_str = "";
	cin >> k >> s;

	map<char, int> char_count;

	for (int i = 0; i < s.size(); ++i)
		char_count[s[i]]++;

	for (auto &item: char_count) {
		if (item.second % k == 0) {
			int i = item.second / k;
			while (i--) {
				part.push_back(item.first);
			}
		} else {
			part = "";
			break;
		}
	}

	if (part.size() == 0)
		cout << -1 << "\n";
	else {
		while (k--)
			k_str += part;

		cout << k_str << "\n";
	}
}


/*
2
aazz

3
abcabcabz

*/

/*
azaz

-1

*/