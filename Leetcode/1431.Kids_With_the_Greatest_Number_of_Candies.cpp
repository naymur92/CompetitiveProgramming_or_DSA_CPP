/*
https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/description/?envType=study-plan-v2&envId=leetcode-75
*/

#include <bits/stdc++.h>

using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
	vector<bool> result;
	int max_elem = *max_element(candies.begin(), candies.end());

	for (int i = 0; i < candies.size(); ++i)
	{
		result.push_back(candies[i] + extraCandies >= max_elem);
	}
	return result;
}

int main() {
	vector<int> candies = {2,3,5,1,3};
	int extraCandies = 3;

	auto result = kidsWithCandies(candies, extraCandies);
	for (int i = 0; i < 5; ++i)
	{
		cout << result[i] << " ";
	}
}


/*
2 3 5 1 3
3

*/

/*
true true true false true
*/