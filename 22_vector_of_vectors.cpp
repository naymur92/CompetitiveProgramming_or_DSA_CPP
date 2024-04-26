#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &v){
	cout << "Size: " << v.size() << endl;
	
	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}

int main(){
	int N;
	cin >> N;

	// definition array of vectors
	vector<vector<int>> v;

	for (int i = 0; i < N; ++i)
	{
		int n;
		cin >> n;
		vector <int> tmp_v;
		for (int j = 0; j < n; ++j)
		{
			int x;
			cin >> x;
			tmp_v.push_back(x);
		}
		v.push_back(tmp_v);
	}

	v.push_back(vector<int> ());
	for (int i = 0; i < v.size(); ++i)
	{
		print(v[i]);
	}
}