/*
https://codeforces.com/contest/2040/problem/C
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long k;
        cin >> n >> k;

        if (n - 1 < ceil(log2(k))) {
            cout << -1 << "\n";
            continue;
        }

        vector<int> nums(n);
        vector<bool> bitmask(n - 1);
        long long temp = k - 1;
        for (int i = n - 2; i >= 0; --i)
        {
            bitmask[i] = temp&1;
            temp >>= 1;
        }

        int l = 0, r = n - 1;
        for (int i = 0; i < n - 1; ++i)
        {
            if (bitmask[i]) {
                nums[r--] = i + 1;
            } else {
                nums[l++] = i + 1;
            }
        }
        nums[l] = n;

        for (int i = 0; i < n; ++i)
        {
            cout << nums[i] << ' ';
        }
        cout << "\n";
    }
}


/*
6
3 2
3 3
4 11
4 6
6 39
7 34

*/

/*
1 3 2 
2 3 1 
-1
2 4 3 1 
-1
2 3 4 5 7 6 1 

*/