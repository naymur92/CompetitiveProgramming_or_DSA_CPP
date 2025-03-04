#include <bits/stdc++.h>

using namespace std;

void solve() {
	string s;
	cin >> s;

	long long cnt = 0;
	for (int i = 0; i < s.size(); ++i) {
		if (s[i] == '4' || s[i] == '7') cnt++;		
	}

	if (cnt == 0) {
		cout << "NO" << "\n";
		return;
	}
	
	bool is_lucky = true;
	while (cnt > 0) {
		int last_digit = cnt % 10;
		cnt /= 10;

		if (last_digit != 4 && last_digit != 7) {
			is_lucky = false;
			break;
		}
	}

	cout << (is_lucky ? "YES\n" : "NO\n");
}

int main() {
	/*int t;
	cin >> t;

	while (t--) {
		solve();
	}*/

	solve();
}