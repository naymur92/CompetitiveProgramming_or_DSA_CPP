/*
https://codeforces.com/problemset/problem/158/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> count_s(5);
	for (int i = 0; i < n; ++i) {
		int s_i;
		cin >> s_i;

		count_s[s_i]++;
	}

	int cars = count_s[4];	// have 4 friends

	// manage 1 and 3
	int min_f = min(count_s[1], count_s[3]);
	cars += min_f;
	count_s[1] -= min_f;
	count_s[3] -= min_f;
	cars += count_s[3];

	// manage 1 and 2
	cars += (count_s[1] / 4);
	cars += (count_s[2] / 2);
	count_s[1] %= 4;
	count_s[2] %= 2;

	// conbine 1 and 2
	cars += ceil((count_s[2] * 2 + count_s[1]) / 4.0);

	cout << cars << "\n";
}


/*
5
1 2 4 3 3



8
2 3 4 4 2 1 3 1



*/

/*

4


5



*/