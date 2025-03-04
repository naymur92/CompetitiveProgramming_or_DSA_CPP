/*
https://codeforces.com/group/yg7WhsFsAp/contest/419146/problem/P15
*/
#include <bits/stdc++.h>

using namespace std;

bool isLucky(int  num) {
	bool is_lucky = true;
	while (num > 0) {
		int last_digit = num % 10;
		num /= 10;

		if (last_digit != 4 && last_digit != 7) {
			is_lucky = false;
			break;
		}
	}

	return is_lucky;
}

void solve() {
	int num;
	cin >> num;

	for (int i = 1; i * i <= num; ++i) {
		if (num % i == 0 && (isLucky(i) || isLucky(num / i))) {
			cout << "YES\n";
			return;
		}
	}

	cout << "NO\n";
}

int main() {
	solve();
}

/*
40047
NO


7747774
YES

1000000000000000000
NO
*/