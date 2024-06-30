#include <bits/stdc++.h>
using namespace std;

vector<int> NGE(vector<int> &v){
	vector<int> nge(v.size());
	stack<int> st;
	for (int i = 0; i < v.size(); ++i)
	{
		while(!st.empty() && v[st.top()] < v[i]){
			nge[st.top()] = i;
			st.pop();
		}
		st.push(i);
	}
	while(!st.empty()){
		nge[st.top()] = -1;
		st.pop();
	}
	return nge;
}

int main(){
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	vector<int> nge = NGE(v);
	for(auto &val: nge) cout << (val == -1 ? -1 : v[val]) << " ";
	cout << endl;
}

/*
6
4 5 2 25 7 8
*/

/*
5 25 25 -1 8 -1 
*/