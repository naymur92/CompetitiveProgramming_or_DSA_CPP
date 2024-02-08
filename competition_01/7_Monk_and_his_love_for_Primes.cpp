#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;

	int size = s.size();

	int X = 0;

	for(int i = 0; i < size; ++i) {	
		// upper to lower	// A = 65, Z = 90	
		if(s[i] >= 'A' && s[i] <= 'Z') {
			s[i] = 'a' + (s[i] - 'A');
			X -= s[i];
		}
		// lower to upper	// a = 97, z = 122	
		if(s[i] >= 'a' && s[i] <= 'z') {
			s[i] = 'A' + (s[i] - 'a');
			X += s[i];
		}
	}
	if(X < 0) {
		X = X * -1;
	}
	
	// prime check
	bool prime = 1;

	if(X == 1) {
		prime = 0;
	} else if(X > 2) {
		for(int i = 2; i < X / 2; ++i) {
			if(X % i == 0) {
				prime = 0;
				break;
			}
		}
	}

	cout << prime << endl;
}