#include <bits/stdc++.h>
using namespace std;

int main(){
	map<int, string> m;

	m[1] = "abcd";
	m[6] = "bcde";
	m[3] = "efgh";

	m.insert({5, "ijkl"});

	map<int, string> ::iterator it;
	for(it = m.begin(); it != m.end(); ++it)
	{
		cout << it->first << " " << it->second << endl;
	}
}