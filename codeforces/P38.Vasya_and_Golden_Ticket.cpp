/*
https://codeforces.com/group/yg7WhsFsAp/contest/355494/problem/P38
*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	string s;
	cin >> n >> s;

	vector<int> digits(n);
    int total_sum = 0;

    for (int i = 0; i < n; ++i) {
        digits[i] = s[i] - '0';
        total_sum += digits[i];
    }

    if (total_sum == 0) {
        cout << "YES" << endl;
        return;
    }

    for (int target_sum = 1; target_sum < total_sum; ++target_sum) {
        int curr_sum = 0;
        int count = 0;
        bool valid = true;

        for (int i = 0; i < n; ++i) {
            curr_sum += digits[i];
            if (curr_sum > target_sum) {
                valid = false;
                break;
            } else if (curr_sum == target_sum) {
                curr_sum = 0;
                ++count;
            }
        }

        if (valid && curr_sum == 0 && count >= 2) {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
    return;
}

int main() {
	solve();
}

/*
5
73452

YES

//////////////
4
1248

NO

*/