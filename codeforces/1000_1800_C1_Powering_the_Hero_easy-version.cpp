/*
https://codeforces.com/problemset/problem/1800/C1
*/

#include <bits/stdc++.h>

using namespace std;

int main() {	
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		vector<int> card_powers(n);

		for (int i = 0; i < n; ++i)
			cin >> card_powers[i];

		long long heros = 0;
		vector<int> bonus_cards(n);
		int cur = -1;

		int hero_count = 0;

		for (int i = 0; i < n; ++i) {
			if (card_powers[i] > 0) {
				bonus_cards[++cur] = card_powers[i];;
			} else {
				if (cur != -1) {
					sort(bonus_cards.begin(), bonus_cards.begin() + cur + 1);
					heros += bonus_cards[cur];

					bonus_cards[cur--] = 0;
				}
			}
		}

		cout << heros << "\n";
	}
}


/*
5
5
3 3 3 0 0
6
0 3 3 0 0 3
7
1 2 3 0 4 5 0
7
1 2 5 0 4 3 0
5
3 1 0 0 4

*/

/*
6
6
8
9
4

*/