#include <bits/stdc++.h>
using namespace std;

void print(unordered_map<int, string> &m){
	cout << "Size: " << m.size() << endl;
	for(auto &value: m)
	{
		cout << value.first << " " << value.second << endl;
	}
}

int main(){
	unordered_map<int, string> m;

	m[1] = "abcd";	// O(1)
	m[6] = "bcde";
	m[3] = "efgh";

	m.insert({5, "ijkl"});

	print(m);
}