/*
https://codeforces.com/problemset/problem/352/A
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	map<int, int> m;
	
	for (int i = 0; i < n; ++i) {
		int a;
		cin >> a;
		m[a]++;
	}

	auto it0 = m.find(0);
	if (it0 == m.end()) {
		cout << -1 << "\n";
		return 0;
	}

	auto it5 = m.find(5);
	if (it5 == m.end()) {
		cout << 0 << "\n";
		return 0;
	}

	for (int i = 0; i < m[5] / 9; ++i) cout << 555555555;
	if (m[5] / 9 > 0) for (int i = 0; i < m[0]; ++i) cout << 0;
	else cout << 0;
	cout << "\n";
}


/*
4
5 0 5 0


11
5 5 5 5 5 5 5 5 0 5 5


*/

/*
0

5555555550


*/