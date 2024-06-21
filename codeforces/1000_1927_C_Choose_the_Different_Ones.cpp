/*
https://codeforces.com/problemset/problem/1927/C
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
		set<int> selected_N;
		set<int> selected_M;
		set<int> duplicates;

		for (int i = 0; i < n; ++i)
		{
			int a;
			cin >> a;
			
			if (a <= k)
			{
				selected_N.insert(a);
			}
		}
		for (int i = 0; i < m; ++i)
		{
			int b;
			cin >> b;
			
			if (b <= k)
			{
				auto it = selected_N.find(b);
				if(it != selected_N.end()) {
					duplicates.insert(b);
				}
				selected_M.insert(b);
			}
			
		}

		// for(auto &val: selected_N)
		// {
		// 	cout << val << " ";
		// }
		// cout << endl;
		// for(auto &val: selected_M)
		// {
		// 	cout << val << " ";
		// }
		// cout << endl;
		// cout << "dup: " << duplicates.size() << endl;

		if(selected_N.size() < k / 2 || selected_M.size() < k / 2) puts("NO");
		else
		{
			int extra = selected_N.size() - (k / 2);
			if((selected_M.size() - duplicates.size() + extra) < (k / 2)) puts("NO");
			else puts("YES");			
		}
		
	}
}


/*
6
6 5 6
2 3 8 5 6 5
1 3 4 10 5
6 5 6
2 3 4 5 6 5
1 3 8 10 3
3 3 4
1 3 5
2 4 6
2 5 4
1 4
7 3 4 4 2
1 4 2
2
6 4 4 2
1 5 2
3
2 2 1 4 3

*/

/*
YES
NO
YES
YES
NO
NO

*/