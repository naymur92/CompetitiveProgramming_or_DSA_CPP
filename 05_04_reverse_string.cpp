#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;

	cin >> s;

	string new_str;

	for(int i = s.size() - 1; i >= 0; i--){
		// this is a wrong process
		// new_str = new_str + s[i];

		// correct process
		new_str.push_back(s[i]);
	}

	cout << new_str << endl;
}