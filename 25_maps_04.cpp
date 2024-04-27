#include <bits/stdc++.h>
using namespace std;

void print(map<int, string> &m){
	cout << "Size: " << m.size() << endl;
	for(auto &value: m)
	{
		cout << value.first << " " << value.second << endl;
	}
}

int main(){
	map<int, string> m;

	m[1] = "abcd";	// O(log(n))
	m[6] = "bcde";
	m[3] = "efgh";

	m.insert({5, "ijkl"});
	m[43];

	// erase
	m.erase(3);

	auto it = m.find(7);
	if(it != m.end())
		m.erase(it);

	print(m);

	// clear
	m.clear();
	print(m);
}