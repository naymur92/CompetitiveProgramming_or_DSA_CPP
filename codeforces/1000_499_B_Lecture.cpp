/*
https://codeforces.com/problemset/problem/499/B
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;

	map<string, string> words;

	for (int i = 0; i < m; ++i)
	{
		string a, b;
		cin >> a >> b;
		if(a.size() <= b.size()) b = a;

		words[a] = b;
	}
	while(n--)
	{
		string c;
		cin >> c;
		cout << words[c] << " ";
	}
	cout << endl;
}


/*
5 3
joll wuqrd
euzf un
hbnyiyc rsoqqveh
hbnyiyc joll joll euzf joll
*/

/*
hbnyiyc joll joll un joll
*/