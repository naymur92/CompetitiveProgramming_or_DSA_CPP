/*
https://codeforces.com/problemset/problem/1907/B
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

		int b_count = 0;
		int B_count = 0;
		vector<char> str;

		for (int i = s.size() - 1; i >= 0; --i)
		{
			char c = s[i];
			if (c == 'b') b_count++;
			else if (c == 'B') B_count++;
			else {
				if (islower(c) && b_count > 0) b_count--;
				else if(!islower(c) && B_count > 0) B_count--;
				else str.push_back(c);
			}
		}
		for (int i = str.size() - 1; i >= 0; --i) {
			cout << str[i];
		}
		cout << "\n";
	}
}


/*
12
ARaBbbitBaby
YetAnotherBrokenKeyboard
Bubble
Improbable
abbreviable
BbBB
BusyasaBeeinaBedofBloomingBlossoms
CoDEBARbIES
codeforces
bobebobbes
b
TheBBlackbboard

*/

/*
ity
YetnotherrokenKeoard
le
Imprle
revile

usyasaeeinaedofloominglossoms
CDARIES
codeforces
es

helaoard

*/