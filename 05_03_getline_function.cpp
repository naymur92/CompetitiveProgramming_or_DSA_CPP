#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	string s;

	cin >> t;

	// cin.ignore() function ignore current cursor \n
	cin.ignore();
	while(t--){
		getline(cin, s);
		cout << s << endl;
	}
}