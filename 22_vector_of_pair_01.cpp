#include <bits/stdc++.h>
using namespace std;

void print(vector<pair <int, int>> &v_p){
	cout << "Size: " << v_p.size() << endl;
	
	for (int i = 0; i < v_p.size(); ++i)
	{
		cout << v_p[i].first << ", " << v_p[i].second << endl;
	}
}

int main(){
	int n;
	cin >> n;

	// definition vector of pair
	// vector<pair <int, int>> v_p = {{2, 3}, {4, 5}, {3, 2}};
	vector<pair <int, int>> v_p;

	for (int i = 0; i < n; ++i)
	{
		int x, y;
		cin >> x >> y;
		v_p.push_back({x, y});
	}

	print(v_p);
}