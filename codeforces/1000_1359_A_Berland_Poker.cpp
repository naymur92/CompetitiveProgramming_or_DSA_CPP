/*
https://codeforces.com/problemset/problem/1359/A
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--)
	{
		int n, m, k;
		cin >> n >> m >> k;

		int ind_cards = n / k;

		if(ind_cards >= m)
			cout << m << endl;
		else
		{
			int max_card = ind_cards;
			m = m - ind_cards;
			k--;

			while(m > 0)
			{
				m -= k;
				max_card--;
			}
			cout << max_card << endl;
		}
	}
}


/*
4
8 3 2
4 2 4
9 6 3
42 0 7
*/

/*
3
0
1
0
*/