/*
Given N strings. Print unique strings
in lexicographical order.

N <= 10 ^ 5;
|S| <= 100
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;

	set<string> s;

	for (int i = 0; i < N; ++i)
	{
		string tmp;
		cin >> tmp;
		s.insert(tmp);
	}

	for(auto& value: s)
	{
		cout << value << endl;
	}
}

/*
8
abc
def
abc
ghj
jkl
ghj
ghj
abc
*/