/*
https://codeforces.com/group/yg7WhsFsAp/contest/355494/problem/P33
*/
#include <bits/stdc++.h>

using namespace std;

int getMaxSortLen(vector<int> &a, int first, int last){
    if(is_sorted(a.begin() + first, a.begin() + last))
        return last - first;
    return max(getMaxSortLen(a, first, (first + last) / 2), getMaxSortLen(a, (first + last) / 2, last));
}

void solve() {
	int n;
	cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	
	cout << getMaxSortLen(a, 0, n) << "\n";
}

int main() {
	solve();
}

/*
4
1 2 2 4

4

////////////

8
11 12 1 2 13 14 3 4


2
*/