/*
https://codeforces.com/problemset/problem/1941/B
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	int t;
	cin >> t;

	while(t--)
	{
		int n;
		cin >> n;
		ll numbers[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> numbers[i];
		}

		bool is_possible = true;

		for (int i = 1; i < n - 1; ++i)
		{
			numbers[i] -= (2 * numbers[i - 1]);
			numbers[i + 1] -= numbers[i - 1];
			numbers[i - 1] = 0;

			if(numbers[i] < 0)
			{
				is_possible = false;
				break;
			}
		}

		if (is_possible)
		{
			for (int i = n - 1; i >= 0; --i)
			{
				if(numbers[i] != 0)
				{
					is_possible = false;
					break;
				}
			}
		}
		
		cout << (is_possible ? "YES" : "NO") << endl;
	}
}


/*
7
5
1 3 5 5 2
5
2 4 4 5 1
5
0 1 3 3 1
6
5 6 0 2 3 0
4
1 2 7 2
3
7 1 0
4
1 1 1 1

*/

/*
YES
NO
YES
NO
NO
NO
NO

*/