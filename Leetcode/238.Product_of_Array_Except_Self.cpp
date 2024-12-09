/*
https://leetcode.com/problems/product-of-array-except-self/description/?envType=study-plan-v2&envId=leetcode-75
*/

#include <bits/stdc++.h>

using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
	int n = nums.size();
	vector<int> forwardProd(n, 1);
	vector<int> backwardProd(n, 1);

	for (int i = 1; i < n; ++i)
	{
		forwardProd[i] = forwardProd[i - 1] * nums[i - 1];
	}
	for (int i = n - 2; i >= 0; --i)
	{
		backwardProd[i] = backwardProd[i + 1] * nums[i + 1];
	}

	vector<int> result(n);
	for (int i = 0; i < n; ++i)
	{
		result[i] = forwardProd[i] * backwardProd[i];
	}

	return result;
}

int main() {
	vector<int> nums = {-1,1,0,-3,3};

	auto result = productExceptSelf(nums);

	for (int i = 0; i < result.size(); ++i)
	{
		cout << result[i] << " ";
	}
	cout << "\n";
}