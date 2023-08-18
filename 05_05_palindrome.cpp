#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;

	cin >> s;

	string new_str;

	for(int i = s.size() - 1; i >= 0; i--){		
		new_str.push_back(s[i]);
	}

	if(s == new_str){
		cout << "YES" << endl;
	} else{
		cout << "NO" << endl;
	}
}