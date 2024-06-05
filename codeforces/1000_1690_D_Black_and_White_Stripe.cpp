/*
https://codeforces.com/problemset/problem/1690/D
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--)
	{
		int n, k;
		cin >> n >> k;

		string s;
		cin >> s;

		int black_in_current_k_block = 0;

		// calculate total black in first k block
		for (int i = 0; i < k; ++i)
		{
			if (s[i] == 'B') black_in_current_k_block++;
		}

		int max_black = black_in_current_k_block;

		// calculate blacks in next blocks
		for (int i = k; i < n; ++i)
		{
			if (s[i] == 'B') black_in_current_k_block++;
			if (s[i - k] == 'B') black_in_current_k_block--;

			if(black_in_current_k_block > max_black) max_black = black_in_current_k_block;
		}

		cout << (k - max_black) << endl;
	}
}


/*
4
5 3
BBWBW
5 5
BBWBW
5 1
BBWBW
1 1
W



30
1 1
W
5 1
WWWBB
9 8
WWWWWWWWW
2 2
WB
9 9
BBWWWWWWW
3 2
WWW
10 3
BBBWBBBWBW
10 2
WWWWWWWWWB
9 1
WWWWWBWWW
8 1
BBWWWWBB
7 1
BWBWWWB
1 1
W
2 2
WB
9 9
WBWBBBBWW
9 1
BBBBBBBBW
10 4
WBBBBWWWWB
4 2
BBBW
2 1
WW
1 1
W
5 3
WWWWW
10 1
BBBBBBWBBB
9 2
BWBBBBWBB
2 2
WW
2 2
BW
10 7
WBBBBBBWBB
8 1
WBBBBWBB
10 2
WBWWWWWWWW
6 2
BBBBWB
2 1
WW
7 3
WWBWWWW
10 2
WWWWWWWWWW
3 2
WBW
10 5
WWWBWWBBWB
3 3
WBW
1 1
W
9 9
WBBBBBBBB
3 1
WWB

*/

/*
1
2
0
1

*/