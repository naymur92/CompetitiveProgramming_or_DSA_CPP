/*
https://codeforces.com/group/yg7WhsFsAp/contest/355494/problem/P41
*/
#include <bits/stdc++.h>

using namespace std;

const int N = 3e5 + 5;

bool primes[N];

void sieve() {
    primes[0] = primes[1] = true;

    for (int i = 2; i < N; ++i) {
        for (int j = 2 * i; j < N; j += i) {
            primes[j] = true;
        }
    }
}

void solve() {
    int q;
    cin >> q;

    vector<int> ps(N, 0);
    for (int i = 1; i < N; ++i) {
        ps[i] += ps[i - 1] + !primes[i];

        // cout << ps[i] << " ";
    }

    while (q--) {
        int a, b;
        cin >> a >> b;

        cout << (ps[b] - ps[a - 1]) << "\n";
    }
}

int main() {
    sieve();

	solve();
}

/*
2
10 15
1 5



2
3


//////////////



*/