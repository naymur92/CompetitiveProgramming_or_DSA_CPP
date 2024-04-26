#include <bits/stdc++.h>
using namespace std;

int main(){
	map<int, string> m;

	m[1] = "abcd";	// O(lon(n))
	m[6] = "bcde";
	m[3] = "efgh";

	m.insert({5, "ijkl"});
	m[43];

	for(auto &value: m)
	{
		cout << value.first << " " << value.second << endl;
	}
}