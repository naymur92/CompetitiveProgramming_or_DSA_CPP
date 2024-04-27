#include <bits/stdc++.h>
using namespace std;

void print(set<string> &s){
	cout << "Size: " << s.size() << endl;
	for(auto &value: s)
	{
		cout << value << endl;
	}
}

int main(){
	set<string> s;		// store unique elements

	s.insert("ijkl");	// log(n)
	s.insert("def");
	s.insert("abc");

	auto it = s.find("bcd");
	if(it != s.end()) s.erase(it);

	print(s);
}