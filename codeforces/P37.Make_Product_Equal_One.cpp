/*
https://codeforces.com/group/yg7WhsFsAp/contest/355494/problem/P37
*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;

	long long sumPos = 0, sumNeg = 0, ans = 0;
	int posCnt = 0, negCnt = 0;
	for (int i = 0; i < n; ++i) {
		int num;
		cin >> num;

		if (num <= 0) ans += abs(num + 1);
		else ans += (num - 1);

		if (num < 0) {
			negCnt++;
		} else if (num > 0) {
			posCnt++;
		}
	}

	if (negCnt % 2 and (n - (negCnt + posCnt)) == 0) {
		ans += 2;
	}

	cout << ans << "\n";
}

int main() {
	solve();
}

/*
2
-1 1

2

//////////////
5
-5 -3 5 3 0


13

*/