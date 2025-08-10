/*
https://codeforces.com/problemset/problem/2125/A
*/

#include <bits/stdc++.h>

using namespace std;

void solve() {
	string s;
	cin >> s;
	sort(s.rbegin(), s.rend());

	cout << s << "\n";
}

int main() {	
	int t;
	cin >> t;

	while (t--) {
		solve();
	}
}


/*
5
FFT
ABFBANTTA
FFTNTT
FFTFFTFFTNNTNNT
AFFTBFFNTTFTTZ

*/

/*
FTF
ABFBANATT
NTFTFT
TFFFFFFNTNTNTNT
AFTFBTTFFNFTTZ

*/