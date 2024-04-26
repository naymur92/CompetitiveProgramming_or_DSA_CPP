#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<pair<int, int>> v = {{2, 3}, {6, 3}, {6, 2}};

	// copy method
	for(pair<int, int> value: v)
	{
		cout << value.first << " " << value.second << endl;
	}

	// reference method
	for(pair<int, int> &value: v)
	{
		cout << value.first << " " << value.second << endl;
	}
	
}