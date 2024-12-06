/*
https://codeforces.com/contest/2050/problem/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        long long odd_sum = 0;
        long long even_sum = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];

            if ((i + 1)&1) odd_sum += 1LL * a[i];
            else even_sum += 1LL * a[i];
        }        

        bool is_possible = true;
        int even_count = n / 2;
        int odd_count = n - even_count;

        if (odd_sum % odd_count != 0 || even_sum % even_count != 0) is_possible = false;
        else if (odd_sum / odd_count != even_sum / even_count) is_possible = false;

        cout << (is_possible ? "YES\n" : "NO\n");
    }
}


/*
8
3
3 2 1
3
1 1 3
4
1 2 5 4
4
1 6 6 1
5
6 2 1 4 2
4
1 4 2 1
5
3 1 2 1 3
3
2 4 2

*/

/*
YES
NO
YES
NO
YES
NO
NO
NO

*/