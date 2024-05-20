/*
https://codeforces.com/problemset/problem/112/A
*/

#include <bits/stdc++.h>

using namespace std;

int main(){	
	string s1, s2;
	int score1 = 0, score2 = 0;

	cin >> s1 >> s2;

	for (int i = 0; i < s1.size(); ++i)
	{
		int c1 = s1[i];
		int c2 = s2[i];

		if(c1 >= 97) c1 -= 32;
		if(c2 >= 97) c2 -= 32;

		if(c1 > c2) {
			score1++;
			break;
		}
		if(c1 < c2) {
			score2++;
			break;
		}
	}
	// cout << score1 << " - " << score2 << endl;
	if(score1 == score2) cout << 0 << endl;
	else if(score1 < score2) cout << -1 << endl;
	else cout << 1 << endl;
}

/*
abcdefg
AbCdEfF

*/

/*
1
*/