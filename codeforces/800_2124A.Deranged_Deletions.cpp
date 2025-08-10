/*
https://codeforces.com/problemset/problem/2124/A
*/

#include <bits/stdc++.h>

using namespace std;

/*bool isAscSorted(vector<int> &a) {
	for (int i = 0; i < a.size() - 1; ++i) {
		if (a[i] > a[i + 1]) return false;
	}

	return true;
}*/

void solve() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int &ai: a) cin >> ai;

	/*if (isAscSorted(a)) {
		cout << "NO\n";
		return;
	}

	vector<int> tmp = a;
	sort(tmp.begin(), tmp.end());

	vector<int> ans;
	for (int i = 0; i < n; ++i) {
		if (a[i] != tmp[i]) ans.push_back(a[i]);
	}
	cout << "YES\n";
	cout << ans.size() << "\n";
	for (int ai: ans) cout << ai << " ";
	cout << "\n";*/

	// another solution
	int ans_indx = 0;
	for (int i = 0; i < n - 1; ++i) {
		if (a[i] > a[i + 1]) ans_indx = i + 1;
	}

	if (ans_indx) {
		cout << "YES\n";
		cout << 2 << "\n";
		cout << a[ans_indx - 1] << " " << a[ans_indx] << "\n";
	} else {
		cout << "NO\n";
	}
}

int main() {	
	int t;
	cin >> t;

	while (t--) {
		solve();
	}
}


/*
3
3
2 2 3
5
4 5 5 2 4
1
1

*/

/*
NO
YES
4
4 5 2 4
NO
*/