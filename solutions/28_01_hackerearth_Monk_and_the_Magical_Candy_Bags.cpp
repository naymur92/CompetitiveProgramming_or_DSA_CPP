/*
https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-the-magical-candy-bags/
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--)
	{
		int n, k;
		cin >> n >> k;

		multiset<long long> candies;

		for (int i = 0; i < n; ++i)
		{
			long long tmp;
			cin >> tmp;
			candies.insert(tmp);
		}

		long long max_candies_eaten = 0;
		for (int i = 0; i < k; ++i)
		{
			auto it = (--candies.end());
			long long candy_in_bag = *it;
			max_candies_eaten += candy_in_bag;
			candies.erase(it);

			candies.insert(candy_in_bag/2);
		}
		cout << max_candies_eaten << endl;
	}
}

/*
1
5 3
2 1 7 4 2
*/

/*
14
*/