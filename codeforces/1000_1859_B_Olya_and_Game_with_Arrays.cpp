/*
https://codeforces.com/problemset/problem/1859/B
*/

#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

int main(){
	int t;
	cin >> t;

	while(t--)
	{
		int n;
		cin >> n;

		vector<unsigned long> firstElems(n);
		vector<unsigned long> secondElems(n);

		for (int i = 0; i < n; ++i)
		{
			int m;
			cin >> m;
			vector<unsigned long> v(m);

			for (int i = 0; i < m; ++i) cin >> v[i];

			sort(v.begin(), v.end());

			firstElems[i] = v[0];
			if (v.size() > 1) secondElems[i] = v[1];
		}

		ull sum = 0;

		sort(firstElems.begin(), firstElems.end());
		sort(secondElems.begin(), secondElems.end());

		sum = (ull) firstElems[0] + accumulate(secondElems.begin() + 1, secondElems.end(), 0ull);
		cout << sum << "\n";
	}
}


/*
3
2
2
1 2
2
4 3
1
3
100 1 6
3
4
1001 7 1007 5
3
8 11 6
2
2 9

*/

/*
5
1
19

*/