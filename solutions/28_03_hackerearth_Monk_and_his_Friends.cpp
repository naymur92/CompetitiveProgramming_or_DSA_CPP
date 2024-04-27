/*
https://www.hackerearth.com/practice/data-structures/trees/binary-search-tree/practice-problems/algorithm/monk-and-his-friends/?fbclid=IwAR1n1FJUNpWIeq7dHY-HytoqqE1nbK9gD4jMjI2UWGTPE8GF4kHROCb7ouA
*/

#include <bits/stdc++.h>
using namespace std;

int main(){	
	int t;
	cin >> t;
	while(t--)
	{
		unordered_set<long long> candies;

		int n, m;
		cin >> n >> m;

		for (int i = 0; i < n; ++i)
		{
			long long candy;
			cin >> candy;
			candies.insert(candy);
		}

		for (int i = 0; i < m; ++i)
		{
			long long candy;
			cin >> candy;

			auto it = candies.find(candy);
			if(it != candies.end()) {
				cout << "YES" << endl;
			} else {
				cout << "NO" << endl;
				candies.insert(candy);
			}
		}
	}
}

/*
1
2 3
3 2 9 11 2
*/

/*
NO
NO
YES
*/