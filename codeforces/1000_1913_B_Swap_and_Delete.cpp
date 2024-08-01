/*
https://codeforces.com/problemset/problem/1913/B
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--)
	{
		string s;
		cin >> s;

		int count[2];
		count[0] = count[1] = 0;

		for (int i = 0; i < s.size(); ++i) {
			count[s[i] - '0']++;
		}

		int cost = 0;
		int n = s.size();
		for(int i = 0; i < n; ++i) {
	        int x = 1 - (s[i] - '0');	// reverse 0 and 1 for t
	        if (count[x] == 0) {
	            cost = n - i;
	            break;
	        }
	        count[x]--;
	    }
	    cout << cost << "\n";
	}
}


/*
4
0
011
0101110001
111100

*/

/*
1
1
0
4

*/