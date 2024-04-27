#include <bits/stdc++.h>
using namespace std;

void print(unordered_set<string> &s){
	cout << "Size: " << s.size() << endl;
	for(auto& value: s)
	{
		cout << value << endl;
	}
}

int main(){
	unordered_set<string> us;		// store unique elements

	us.insert("ijkl");	// O(1)
	us.insert("def");
	us.insert("ab");

	auto it = us.find("bcd");
	if(it != us.end()) us.erase(it);

	print(us);
}