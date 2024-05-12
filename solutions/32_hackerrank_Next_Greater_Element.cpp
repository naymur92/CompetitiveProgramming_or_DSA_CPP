/*
https://www.hackerrank.com/contests/second/challenges/next-greater-element/problem
*/

#include <bits/stdc++.h>
using namespace std;


int main(){	
	int n;
	cin >> n;

	vector<int> numbers(n);
	for (int i = 0; i < n; ++i)
	{
		int num;
		cin >> num;
		numbers[i] = num;
	}

	stack<int> st;
	vector<int> nge(n);

	for (int i = 0; i < n; ++i)
	{
		while(!st.empty() && numbers[st.top()] < numbers[i])
		{
			nge[st.top()] = i;
			st.pop();
		}
		st.push(i);
	}
	while(!st.empty())
	{
		nge[st.top()] = -1;
		st.pop();
	}
	for (int i = 0; i < n; ++i)
	{
		cout << numbers[i] << " " << (nge[i] == -1 ? -1 : numbers[nge[i]]) << endl;
	}
	
}

/*
4
4 5 2 25
*/

/*
4 5
5 25
2 25
25 -1
*/