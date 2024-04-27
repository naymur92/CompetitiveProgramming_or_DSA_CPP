/*
Given N strings and Q queries. In each query you
are given a string. Print frequency of that string.

N <= 10 ^ 6
|S| <= 100
Q <= 10^6
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;

	unordered_map<string, int> m;

	for (int i = 0; i < N; ++i)
	{
		string tmp;
		cin >> tmp;
		m[tmp]++;
	}

	int q;
	cin >> q;
	while(q--)
	{
		string s;
		cin >> s;
		cout << m[s] << endl;
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
2
abc
ghj
*/