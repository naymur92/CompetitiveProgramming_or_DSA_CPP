/*
https://leetcode.com/problems/container-with-most-water/description/?envType=study-plan-v2&envId=leetcode-75
*/

#include <bits/stdc++.h>

using namespace std;

int maxArea(vector<int>& height) {
	int i = 0, j = height.size() - 1;
	int max_water = min(height[i], height[j]) * (j - i);

	while (i < j) {		
		max_water = max(max_water, min(height[i], height[j]) * (j - i));

		if (height[i] < height[j]) {
			i++;
		} else {
			j--;
		}
	}

	return max_water;
}

int main() {
	vector<int> height = {1,8,6,2,5,4,8,3,7};

	cout << maxArea(height);
}