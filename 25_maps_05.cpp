#include <bits/stdc++.h>
using namespace std;

void print(map<string, string> &m){
	cout << "Size: " << m.size() << endl;
	for(auto &value: m)
	{
		cout << value.first << " " << value.second << endl;
	}
}

int main(){
	map<string, string> m;

	m["avbe"] = "abcd";	// s.size() * O(lon(n))
	m["ewc"] = "bcde";

	print(m);
}