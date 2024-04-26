/*
Given N strings. Print unique strings
in lexicographical order with their
frequency.

N <= 10 ^ 5;
|S| <= 100
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;

	map<string, int> m;

	for (int i = 0; i < N; ++i)
	{
		string tmp;
		cin >> tmp;
		m[tmp]++;
	}

	for(auto &item: m)
	{
		cout << item.first << " " << item.second << endl;
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