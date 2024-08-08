#include <bits/stdc++.h>
using namespace std;

double eps = 1e-9;	// for decimal precession

double multiply(double num, int n) {
	double ans = 1;
	while (n--) {
		ans *= num;
	}
	return ans;
}

int main() {
	double x;
	int n;
	cin >> x >> n;
	
	double low = 1, high = x, mid;

	while (high - low > eps) {
		mid = (high + low) / 2;

		if (multiply(mid, n) < x) {
			low = mid;
		} else {
			high = mid;
		}
	}

	cout << low << "\n";
}

/*

*/