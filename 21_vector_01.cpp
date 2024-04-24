#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &v){
	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	// v.push_back(15);
}

int main(){
	vector<int> v;

	v.push_back(3);
	v.push_back(1);
	v.push_back(10);

	print(v);
	// print(v);
}