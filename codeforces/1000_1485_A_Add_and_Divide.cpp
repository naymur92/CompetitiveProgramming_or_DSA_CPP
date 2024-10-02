/*
https://codeforces.com/problemset/problem/1485/A
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--)
	{
		int a, b;
		cin >> a >> b;

		int count = INT_MAX;
		for (int i = 0; i * i <= a; ++i) {
			int cnt = i, A = a;

			if (b == 1 && i == 0) continue;

			while (A > 0) {
				A /= (b + i);
				cnt++;
			}
			count = min(count, cnt);
		}
		cout << count << "\n";
	}

}


/*
6
9 2
1337 1
1 1
50000000 4
991026972 997
1234 5678

*/

/*
4
9
2
12
3
1

*/