#include <bits/stdc++.h>
using namespace std;

void print(vector<string> &v){
	cout << "Size: " << v.size() << endl;
	
	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << endl;
	}
}

int main(){
	int n;
	cin >> n;

	// definition string vector
	vector<string> v;

	// input
	for (int i = 0; i < n; ++i)
	{
		string temp;
		cin >> temp;
		v.push_back(temp);
	}
	print(v);
}