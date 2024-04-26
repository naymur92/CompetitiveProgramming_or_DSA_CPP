#include <bits/stdc++.h>
using namespace std;

int main(){
	map<int, string> m;

	m[1] = "abcd";	// O(lon(n))
	m[6] = "bcde";
	m[3] = "efgh";

	m.insert({5, "ijkl"});
	m[43];

	auto it = m.find(4);	// O(lon(n))
	if(it == m.end()) {
		cout << "No value found!" << endl;
	} else {
		cout << it->first << " " << it->second << endl;
	}

	auto it1 = m.find(3);
	if(it1 == m.end()) {
		cout << "No value found!" << endl;
	} else {
		cout << it1->first << " " << it1->second << endl;
	}
}