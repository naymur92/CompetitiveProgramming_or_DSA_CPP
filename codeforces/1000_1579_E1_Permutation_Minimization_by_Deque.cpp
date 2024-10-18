/*
https://codeforces.com/problemset/problem/1579/E1
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;

		deque<int> result;

		for (int i = 0; i < n; ++i) {
			int p_i;
			cin >> p_i;

			if (result.front() > p_i)
				result.push_front(p_i);
			else
				result.push_back(p_i);
		}

		for (auto &p_i: result)
			cout << p_i << " ";

		cout << "\n";
	}
}


/*
5
4
3 1 2 4
3
3 2 1
3
3 1 2
2
1 2
2
2 1

*/

/*
1 3 2 4 
1 2 3 
1 3 2 
1 2 
1 2 

*/