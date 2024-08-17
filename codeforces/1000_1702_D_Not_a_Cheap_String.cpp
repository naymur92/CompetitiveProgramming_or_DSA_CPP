/*
https://codeforces.com/problemset/problem/1702/D
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--)
	{
		string w;
		int p;
		cin >> w >> p;

		string s = w;
		sort(w.begin(), w.end());

		vector<int> pref_sum(w.size());

		pref_sum[0] = w[0] - 96;
		for (int i = 1; i < w.size(); ++i) {
			pref_sum[i] = pref_sum[i - 1] + (w[i] - 96);
		}

		auto it = lower_bound(pref_sum.begin(), pref_sum.end(), p);
		int position = it - pref_sum.begin();

		vector<int> char_count(27);
		int total = 0;
		for (int i = 0; i <= position && i < w.size(); ++i) {
			int val = w[i] - 96;
			if (total + val <= p) {
				char_count[val]++;
				total += val;
			} else {
				break;
			}
		}

		for (int i = 0; i < s.size(); ++i) {
			int val = s[i] - 96;
			if (char_count[val]) {
				cout << s[i];
				char_count[val]--;
			}
		}
		cout << "\n";
	}
}


/*
5
abca
2
abca
6
codeforces
1
codeforces
10
codeforces
100

*/

/*
aa
abc

cdc
codeforces
*/