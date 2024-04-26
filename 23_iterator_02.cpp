#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<pair<int, int>> v = {{2, 3}, {6, 3}, {6, 2}};

	vector<pair<int, int>> ::iterator it;
	for (it = v.begin(); it != v.end(); ++it)
	{
		cout << (*it).first << " " << (*it).second << endl;
	}

	// another approach
	for (it = v.begin(); it != v.end(); ++it)
	{
		cout << it->first << " " << it->second << endl;
	}
}