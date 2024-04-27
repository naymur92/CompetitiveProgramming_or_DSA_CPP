#include <bits/stdc++.h>
using namespace std;

void print(multiset<string> &s){
	cout << "Size: " << s.size() << endl;
	for(auto& value: s)
	{
		cout << value << endl;
	}
}

int main(){
	multiset<string> s;		// store unique elements

	s.insert("ijk");	// O(log(n))
	s.insert("abc");
	s.insert("def");
	s.insert("abc");

	print(s);

	s.erase("abcs");	// delete all matches data

	auto it = s.find("def");	// return matches first data
	if(it != s.end()) s.erase(it);	// delete single data

	print(s);
}