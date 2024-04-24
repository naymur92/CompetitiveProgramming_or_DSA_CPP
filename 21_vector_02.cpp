#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &v){
	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}

int main(){
	int n;
	cin >> n;

	// definition
	vector<int> v(n);

	print(v); // print empty vector

	// insert
	v.push_back(3);
	print(v);

	// pop
	v.pop_back();
	print(v);

	// input
	for (int i = 0; i < v.size(); ++i)
	{
		cin >> v[i];
	}
	print(v);
}