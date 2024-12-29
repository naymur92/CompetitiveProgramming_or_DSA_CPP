/*
https://codeforces.com/problemset/problem/2044/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		// first solution
		vector<int> a(n), b(n + 1);
		queue<int> q;
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			if (b[a[i]] == 0) q.push(a[i]);
			b[a[i]]++;
		}

		while (!q.empty()) {
			cout << q.front() << " ";
			q.pop();
		}
 
		for (int i = 1; i <= n; ++i) {
			if (b[i] == 0) cout << i << " ";
		}

		cout << "\n";

		// another solution
		/*vector<int> a(n), b(n + 1);
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (!b[x]) {
                a[i] = x;
                b[x] = 1;
            }
        }

        queue<int> q;
        for (int i = 1; i <= n; i++) {
            if(!b[i]) q.push(i);
        }

        for (int i = 0; i < n; i++) {
            if (!a[i]) {
                a[i] = q.front();
                q.pop();
            }
        }
        for (int i = 0; i < n; i++) {
            cout << a[i] << " \n"[i == n-1];
        }*/
	}
}


/*
4
2
1 2
4
1 1 1 2
8
4 5 5 5 1 1 2 1
10
1 1 2 2 1 1 3 3 1 1

*/

/*
1 2
1 1 2 2
4 5 5 1 1 2 2 3
1 8 2 2 1 3 3 9 1 1

*/