/*
https://codeforces.com/problemset/problem/525/A
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	string s;
	cin >> n;
	cin >> s;

	int str_len = 2 * n - 2;

	unordered_map<char, int> keys;
	int key_to_buy = 0;

	for(int i = 0; i < str_len; ++i)
	{
		if(i % 2 == 0) {
			// key
			keys[s[i]]++;
		} else {
			// room
			char room_key = s[i] + 32;
			
			auto it = keys.find(room_key);
			if(it != keys.end() && keys[room_key] > 0) {
				keys[room_key]--;
			} else {
				key_to_buy++;
			}
		}
	}
	cout << key_to_buy << endl;
}

/*
5
xYyXzZaZ
*/