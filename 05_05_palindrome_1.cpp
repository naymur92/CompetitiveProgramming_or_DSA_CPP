#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;

	cin >> s;

	bool char_match = true;

	for(int i = 0; i < s.size() / 2; i++){
				
		if(s[i] != s[s.size() - i - 1]) {
			// cout << s[i] << " - " << s[s.size() - (i + 1)] << endl;
			char_match = false;
			break;
		}
	}

	if(char_match) {
		cout << "YES";
	} else {
		cout << "NO";
	}
}