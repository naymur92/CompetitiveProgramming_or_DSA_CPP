/*
https://codeforces.com/problemset/problem/1931/C
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--)
	{
		int n;
		cin >> n;
		int numbers[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> numbers[i];
		}

		if (n == 1)
		{
			cout << 0 << endl;
			continue;
		}

		int forward_match = 0;

		int first_key = numbers[0];

		int forward_indx = 0;
		for (int i = 0; numbers[i] == first_key && i < n; ++i)
		{
			forward_match++;
			forward_indx = i;
		}

		int last_key = numbers[n - 1];

		int backward_match = 0;
		for (int i = n - 1; numbers[i] == last_key && i > forward_indx; --i)
		{
			backward_match++;
		}
		// cout << forward_indx << " ===== " << forward_match << ", " << backward_match << endl;
		if (first_key == last_key)
		{
			cout << n - (forward_match + backward_match) << endl;
		}
		else
		{
			cout << n - max(forward_match, backward_match) << endl;
		}
	}
}


/*
8
6
1 2 3 4 5 1
7
1 1 1 1 1 1 1
8
8 8 8 1 2 8 8 8
1
1
2
1 2
3
1 2 3
7
4 3 2 7 1 1 3
9
9 9 2 9 2 5 5 5 3

*/

/*
4
0
2
0
1
2
6
7

*/