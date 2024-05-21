/*
https://codeforces.com/problemset/problem/500/A
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, t;
	cin >> n >> t;

	unordered_set<long>possible_cells_to_visit;
	possible_cells_to_visit.insert(1);
	for (int i = 1; i < n; ++i)
	{
		int a;
		cin >> a;
		possible_cells_to_visit.insert(i + a);
	}

	auto it = possible_cells_to_visit.find(t);
	if(it != possible_cells_to_visit.end()) cout << "YES" << endl;
	else cout << "NO" << endl;
}


/*
8 5
1 2 1 2 1 1 1

*/

/*
NO
*/