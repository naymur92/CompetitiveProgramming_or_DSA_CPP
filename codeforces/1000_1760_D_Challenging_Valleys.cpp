/*
https://codeforces.com/problemset/problem/1760/D
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
	    cin >> n;
	    vector<int> a;
	    for (int i = 0; i < n; ++i) {
	        int x;
	        cin >> x;
	        if(i == 0 || x != a.back()) {
	            a.push_back(x);
	        }
	    }

	    int valleys = 0;
	    for (int i = 0; i < a.size(); ++i) {
	        if ((i == 0 || a[i - 1] > a[i]) && (i == a.size() - 1 || a[i] < a[i + 1])) {
	            valleys++;
	        }
	    }
	    // cout << valleys << "\n";

	    if (valleys == 1) {
	        cout << "YES\n";
	    } else {
	        cout << "NO\n";
	    }
	}
}


/*
6
7
3 2 2 1 2 2 3
11
1 1 1 2 3 3 4 5 6 6 6
7
1 2 3 4 3 2 1
7
9 7 4 6 9 9 10
1
1000000000
8
9 4 4 5 9 4 9 10

*/

/*
YES
YES
NO
YES
YES
NO

*/