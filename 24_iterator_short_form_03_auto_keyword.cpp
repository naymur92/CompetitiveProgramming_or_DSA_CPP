#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<pair<int, int>> v_p = {{2, 3}, {6, 3}, {6, 2}};

	// reference method
	for(auto &value: v_p)
	{
		cout << value.first << " " << value.second << endl;
	}

	vector<int> v = {3, 8, 98, 54};

	// reference method
	for(auto &value: v)
	{
		cout << value << " ";
	}
	cout << endl;
}