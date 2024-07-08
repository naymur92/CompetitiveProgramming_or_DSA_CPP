/*
https://codeforces.com/problemset/problem/978/C
*/

#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

int main(){
	int n, m;
	cin >> n >> m;

	vector<ull> nr(n);
	vector<ull> rooms(m);

	for (auto &num: nr) cin >> num;
	for (auto &num: rooms) cin >> num;

	vector<ull> prf_nr(n + 1);
	prf_nr[0] = 0;
	for (int i = 0; i < n; ++i) prf_nr[i + 1] = prf_nr[i] + nr[i];

	ull currDorm = 0;

	for (int i = 0; i < m; ++i) {
		while (rooms[i] > prf_nr[currDorm + 1]) currDorm++;
		cout << currDorm + 1 << " " << rooms[i] - prf_nr[currDorm] << "\n";
	}
}


/*
3 6
10 15 12
1 9 12 23 26 37


2 3
5 10000000000
5 6 9999999999

*/

/*
1 1
1 9
2 2
2 13
3 1
3 12


1 5
2 1
2 9999999994

*/