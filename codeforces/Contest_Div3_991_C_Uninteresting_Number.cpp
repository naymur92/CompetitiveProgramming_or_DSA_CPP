/*
https://codeforces.com/contest/2050/problem/C
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;

        int sum_digits = 0;
        int cnt_2 = 0, cnt_3 = 0;
        for (int i = 0; i < s.size(); ++i)
        {
            int a = s[i] - '0';
            sum_digits += a;
            sum_digits %= 9;

            if (a == 2) cnt_2++;
            else if (a == 3) cnt_3++;
        }
        int x = 9 - sum_digits;

        // cout << cnt_3 << "\n";

        if (x == 9) {
            cout << "YES\n";
        } else {
            bool is_possible = false;
            if (x % 2 != 0) x += 9;

            for (int i = 0; i <= min(3, cnt_3); ++i)
            {
                if (x >= 6 * i and cnt_2 >= (x - 6 * i) / 2) {
                    is_possible = true;
                    break;
                }
            }

            cout << (is_possible ? "YES\n" : "NO\n");
        }
    }
}


/*
9
123
322
333333333333
9997
5472778912773
1234567890
23
33
52254522632

*/

/*
NO
YES
YES
NO
NO
YES
NO
YES
YES

*/