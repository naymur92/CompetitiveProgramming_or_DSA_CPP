/*
https://codeforces.com/contest/2036/problem/B
*/

#include <bits/stdc++.h>

using namespace std;

bool cmp(int &a, int &b) {
    return a > b;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        map<int, int> brands;
        for (int i = 0; i < k; ++i) {
            int b_i, c_i;
            cin >> b_i >> c_i;

            brands[b_i] += c_i;
        }

        vector<int> bottles;
        for (auto &b: brands)
            bottles.push_back(b.second);

        sort(bottles.begin(), bottles.end(), cmp);

        int b_size = bottles.size();
        long long total_cost = accumulate(bottles.begin(), bottles.begin() + min(b_size, n), 0);
        
        cout << total_cost << "\n";
    }
}


/*
4
3 3
2 6
2 7
1 15
1 3
2 6
2 7
1 15
6 2
1 7
2 5
190000 1
1 1000
   
*/

/*
28
15
12
1000

*/