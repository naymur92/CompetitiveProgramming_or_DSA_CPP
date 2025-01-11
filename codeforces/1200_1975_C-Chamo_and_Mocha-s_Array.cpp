/*
https://codeforces.com/problemset/problem/1975/C
*/

#include <bits/stdc++.h>

using namespace std;

int main() {	
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		vector<int> a(n);

		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}

		vector<int> answer;
		for (int i = 0; i < n - 1; ++i) {
			answer.push_back(min(a[i], a[i + 1]));
			if (i < n - 2)
				answer.push_back(min(a[i], a[i + 2]));
		}


		cout << *max_element(answer.begin(), answer.end()) << "\n";
	}
}


/*
2
2
1 2
5
1 2 3 4 5

*/

/*
1
4

*/